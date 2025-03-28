#include <iostream>
#include "standard_node.hpp"

#pragma once

template <typename datatype>
class StandardList {
public:

	class Iterator {
	public:
		Iterator(StandardNode<datatype>* ptr = nullptr) : node(ptr) {}

		datatype& operator*() const { return node->payload; }
		datatype* operator->() const { return &(node->payload); }

		Iterator& operator++() {
			node = node->next;
			return *this;
		}

		Iterator operator++(int) {
			Iterator temp = *this;
			node = node->next;
			return temp;
		}

		Iterator& operator--() {
			node = node->prev;
			return *this;
		}

		Iterator operator--(int) {
			Iterator temp = *this;
			node = node->prev;
			return temp;
		}

		bool operator==(const Iterator& other) const { return node == other.node; }
		bool operator!=(const Iterator& other) const { return node != other.node; }

	private:
		StandardNode<datatype>* node;
		friend class StandardList<datatype>;
	};

	StandardList();
	~StandardList();

	Iterator begin() const { return Iterator(_first); }
	Iterator end() const { return Iterator(nullptr); }

	bool empty() const;
	int size() const;
	void push_back(const datatype& payload);
	void push_front(const datatype& payload);
	void erase(Iterator pos);
	void print() const;
	Iterator insert(Iterator pos, const datatype& payload);

private:
	StandardNode<datatype>* _first;
	StandardNode<datatype>* _last;
	int _size;
};

template <typename datatype>
StandardList<datatype>::StandardList() : _first(nullptr), _last(nullptr), _size(0) {}

template <typename datatype>
StandardList<datatype>::~StandardList() {
	while (!empty()) {
		erase(begin());
	}
}

template <typename datatype>
bool StandardList<datatype>::empty() const {
	return _first == nullptr;
}

template <typename datatype>
int StandardList<datatype>::size() const {
	return _size;
}

template <typename datatype>
void StandardList<datatype>::push_back(const datatype& payload) {
	insert(end(), payload);
}

template <typename datatype>
void StandardList<datatype>::push_front(const datatype& payload) {
	insert(begin(), payload);
}

template <typename datatype>
typename StandardList<datatype>::Iterator StandardList<datatype>::insert(Iterator pos, const datatype& payload) {
	StandardNode<datatype>* newNode = new StandardNode<datatype>(payload);
	_size++;

	if (empty()) {
		_first = newNode;
		_last = newNode;
		return Iterator(newNode);
	}

	StandardNode<datatype>* current = pos.node;

	if (current == nullptr) {
		newNode->prev = _last;
		_last->next = newNode;
		_last = newNode;
	} else {
		newNode->next = current;
		newNode->prev = current->prev;
		if (current->prev != nullptr) {
			current->prev->next = newNode;
		}
		current->prev = newNode;
		if (_first == current) {
			_first = newNode;
		}
	}

	return Iterator(newNode);
}

template <typename datatype>
void StandardList<datatype>::erase(Iterator pos) {
	StandardNode<datatype>* current = pos.node;
	if (current == nullptr) return;

	_size--;

	if (current == _first) _first = current->next;
	if (current == _last) _last = current->prev;
	if (current->prev != nullptr) current->prev->next = current->next;
	if (current->next != nullptr) current->next->prev = current->prev;

	delete current;
}

template <typename datatype>
void StandardList<datatype>::print() const {
	int nodeIndex = 1;
	int maxNumber = std::to_string(this->size()).length();
	for (auto iterator = this->begin(); iterator != this->end(); ++iterator) {
		printf("Node %0*d: [\e[0;33m%d\e[0m]\n", maxNumber, nodeIndex, *iterator);
		nodeIndex++;
	}
}

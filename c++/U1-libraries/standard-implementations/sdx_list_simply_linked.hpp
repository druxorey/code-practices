#include <iostream>
#include "sdx_node.hpp"

#pragma once

template <typename datatype>
class StandardSimplyList {
public:

	class iterator {
	public:
		iterator(DoubleNode<datatype>* ptr = nullptr) : node(ptr) {}

		datatype& operator*() const { return node->payload; }
		datatype* operator->() const { return &(node->payload); }

		iterator& operator++() {
			node = node->next;
			return *this;
		}

		iterator operator++(int) {
			iterator temp = *this;
			node = node->next;
			return temp;
		}

		iterator& operator--() {
			node = node->prev;
			return *this;
		}

		iterator operator--(int) {
			iterator temp = *this;
			node = node->prev;
			return temp;
		}

		bool operator==(const iterator& other) const { return node == other.node; }
		bool operator!=(const iterator& other) const { return node != other.node; }

	private:
		DoubleNode<datatype>* node;
		friend class StandardSimplyList<datatype>;
	};

	StandardSimplyList();
	~StandardSimplyList();

	iterator begin() const { return iterator(_first); }
	iterator end() const { return iterator(nullptr); }

	bool empty() const;
	int size() const;
	void push_back(const datatype& payload);
	void push_front(const datatype& payload);
	void erase(iterator pos);
	void print() const;
	iterator insert(iterator pos, const datatype& payload);

private:
	DoubleNode<datatype>* _first;
	DoubleNode<datatype>* _last;
	int _size;
};

template <typename datatype>
StandardSimplyList<datatype>::StandardSimplyList() : _first(nullptr), _last(nullptr), _size(0) {}

template <typename datatype>
StandardSimplyList<datatype>::~StandardSimplyList() {
	while (!empty()) {
		erase(begin());
	}
}

template <typename datatype>
bool StandardSimplyList<datatype>::empty() const {
	return _first == nullptr;
}

template <typename datatype>
int StandardSimplyList<datatype>::size() const {
	return _size;
}

template <typename datatype>
void StandardSimplyList<datatype>::push_back(const datatype& payload) {
	insert(end(), payload);
}

template <typename datatype>
void StandardSimplyList<datatype>::push_front(const datatype& payload) {
	insert(begin(), payload);
}

template <typename datatype>
typename StandardSimplyList<datatype>::iterator StandardSimplyList<datatype>::insert(iterator pos, const datatype& payload) {
	DoubleNode<datatype>* newNode = new DoubleNode<datatype>(payload);
	_size++;

	if (empty()) {
		_first = newNode;
		_last = newNode;
		return iterator(newNode);
	}

	DoubleNode<datatype>* current = pos.node;

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

	return iterator(newNode);
}

template <typename datatype>
void StandardSimplyList<datatype>::erase(iterator pos) {
	DoubleNode<datatype>* current = pos.node;
	if (current == nullptr) return;

	_size--;

	if (current == _first) _first = current->next;
	if (current == _last) _last = current->prev;
	if (current->prev != nullptr) current->prev->next = current->next;
	if (current->next != nullptr) current->next->prev = current->prev;

	delete current;
}

template <typename datatype>
void StandardSimplyList<datatype>::print() const {
	int nodeIndex = 1;
	int maxNumber = std::to_string(this->size()).length();
	for (auto iterator = this->begin(); iterator != this->end(); ++iterator) {
		printf("Node %0*d: [\e[0;33m%d\e[0m]\n", maxNumber, nodeIndex, *iterator);
		nodeIndex++;
	}
}

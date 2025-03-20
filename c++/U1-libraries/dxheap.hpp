#include <iostream>

#pragma once

template <typename datatype> 
class heap {
	public:
		heap(const int resizeStep = 16);
		~heap();

		datatype top();
		void insert(datatype x);
		bool isEmpty();
		void merge(heap<datatype> x);
		void mergeWithoutDuplicates(heap<datatype> x);

		friend std::ostream &operator<<(std::ostream &out, heap &object);

	private:
		const int resizeStep;
		int elementCount;
		int actualSize;
		datatype *data;

		void resizeArray(int newSize);
		int getLeftChildIndex(int parentIndex);
		int getRightChildIndex(int parentIndex);
		int getParentIndex(int childIndex);
		bool isHeap(int parentIndex);
		void swap(int indexA, int indexB);
		void sinkValue(int parentIndex);
		void floatValue(int childIndex);
};

// Resize the internal array to the new size
template <typename datatype>
inline void heap<datatype>::resizeArray(int newSize) {
	datatype *newData = new datatype[newSize];
	
	memcpy(data, newData, elementCount * sizeof(datatype)); // Copy the memory from data to newData
	delete[] data; // Clean up the old array
	data = newData; // Point to the new array
	actualSize = newSize;
}

// Get the index of the left child
template <typename datatype>
inline int heap<datatype>::getLeftChildIndex(int parentIndex) { 
	return parentIndex * 2 + 1;
}

// Get the index of the right child
template <typename datatype>
inline int heap<datatype>::getRightChildIndex(int parentIndex) { 
	return parentIndex * 2 + 2;
}

// Get the index of the parent
template <typename datatype>
inline int heap<datatype>::getParentIndex(int childIndex) { 
	return (childIndex - 1) / 2;
}

// Check if the subtree rooted at parentIndex is a heap
template <typename datatype>
inline bool heap<datatype>::isHeap(int parentIndex) {
	if (parentIndex < 0) return true;

	int leftIndex = getLeftChildIndex(parentIndex);
	int rightIndex = getRightChildIndex(parentIndex);

	// Check if the parent is greater than both children
	if (leftIndex < elementCount && data[parentIndex] < data[leftIndex])
		return false;
	if (rightIndex < elementCount && data[parentIndex] < data[rightIndex])
		return false;

	return true;
}

// Swap the elements at indexA and indexB
template <typename datatype>
inline void heap<datatype>::swap(int indexA, int indexB) {
	datatype aux = data[indexA];
	data[indexA] = data[indexB];
	data[indexB] = aux;
}

// Sink the value at parentIndex down to its correct position
template <typename datatype>
inline void heap<datatype>::sinkValue(int parentIndex) {
	if (isHeap(parentIndex)) return;

	int leftChild = getLeftChildIndex(parentIndex);
	int rightChild = getRightChildIndex(parentIndex);

	// Find the larger of the two children
	int maxIndex = data[leftChild] > data[rightChild] ? leftChild : rightChild;

	swap(maxIndex, parentIndex);

	// Continue sinking if there are more elements
	if (maxIndex < elementCount - 1) sinkValue(maxIndex);
}

// Float the value at childIndex up to its correct position
template <typename datatype>
inline void heap<datatype>::floatValue(int childIndex) {
	int parentIndex = getParentIndex(childIndex);

	if (isHeap(parentIndex)) return;

	swap(childIndex, parentIndex);
	// Continue floating if not at the root
	if (parentIndex > 0) floatValue(parentIndex);
}

// Constructor to initialize the heap
template <typename datatype>
heap<datatype>::heap(const int resizeStep) : resizeStep(resizeStep) {
	elementCount = 0;
	data = new datatype[resizeStep];
	actualSize = resizeStep;
}

// Destructor to clean up the heap
template <typename datatype>
heap<datatype>::~heap() {
	delete[] data;
}

// Remove and return the top element of the heap
template <typename datatype>
inline datatype heap<datatype>::top() {
	datatype topValue = data[0];

	data[0] = data[elementCount - 1];
	elementCount--;

	// Resize the array if necessary
	if (actualSize - elementCount > resizeStep)
		resizeArray(actualSize - resizeStep);

	sinkValue(0);

	return topValue;
}

// Insert a new element into the heap
template <typename datatype>
inline void heap<datatype>::insert(datatype x) {
	// Resize the array if necessary
	if (elementCount + 1 > actualSize)
		resizeArray(actualSize + resizeStep);

	data[elementCount] = x;
	elementCount++;
	floatValue(elementCount - 1);
}

// Check if the heap is empty
template <typename datatype>
inline bool heap<datatype>::isEmpty() {
	return elementCount <= 0;
}

// Merge another heap into this heap
template <typename datatype>
inline void heap<datatype>::merge(heap<datatype> x) {
	while (!x.isEmpty()) {
		datatype y = x.top();
		insert(y);
	}
}

// Merge another heap into this heap without duplicates
template <typename datatype>
inline void heap<datatype>::mergeWithoutDuplicates(heap<datatype> x) {
	while (!x.isEmpty()) {
		datatype y = x.top();
		heap aux;
		while (!isEmpty()) {
			datatype z = top();
			if (z == y)
				break;
			aux.insert(z);
		}
		insert(y);
		while (!aux.isEmpty())
			insert(aux.top());
	}
}

// Overload the << operator to print the heap
template <typename datatype>
std::ostream &operator<<(std::ostream &out, heap<datatype> &object) {
	out << "Data: ";
	for (int i = 0; i < object.elementCount; i++)
		out << object.data[i] << "; ";
	out << std::endl;
	out << "Element Count: " << object.elementCount
			<< ", Capacity: " << object.actualSize;
	return out;
}

#pragma once
#include <algorithm>

template <typename T>
class SimpleVector {
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector(int capacity = 10);
	SimpleVector(const SimpleVector<T>& other);
	~SimpleVector();
	void push_back(const T& value);
	void pop_back();
	void resize(int newCapacity);
	void sortData();
	int size() const;
	int capacity() const;

	// 과제x
	// data indexing
	T& operator[] (int index);
};

template<typename T>
SimpleVector<T>::SimpleVector(int capacity) {
	currentSize = 0;
	currentCapacity = capacity;
	data = new T[capacity];
}

template<typename T>
SimpleVector<T>::SimpleVector(const SimpleVector<T>& other) {
	currentCapacity = other.capacity();
	currentSize = other.currentSize;
	data = new T[currentCapacity];
	std::copy(other.data, other.data + other.currentSize, data);
}

template<typename T>
SimpleVector<T>::~SimpleVector() {
	delete[] data;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value) {
	if (currentSize >= currentCapacity) {
		resize(currentCapacity + 5);
	}

	data[currentSize++] = value;
}

template<typename T>
void SimpleVector<T>::pop_back() {
	if (currentSize > 0) {
		currentSize--;
	}
}

template<typename T>
void SimpleVector<T>::resize(int newCapacity) {
	if (newCapacity <= currentCapacity) {
		return;
	}

	currentCapacity = newCapacity;

	T* newData = new T[currentCapacity];

	std::copy(data, data + currentSize, newData);

	delete[] data;

	data = newData;
}

template<typename T>
void SimpleVector<T>::sortData() {
	sort(data, data + currentSize);
}

template<typename T>
int SimpleVector<T>::size() const {
	return currentSize;
}

template<typename T>
int SimpleVector<T>::capacity() const {
	return currentCapacity;
}

template<typename T>
T& SimpleVector<T>::operator[] (int index) {
	if (index >= 0 && index < currentSize) {
		return data[index];
	}
}

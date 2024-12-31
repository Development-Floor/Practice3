#pragma once

template <typename T>
class SimpleVector {
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector(int capacity = 10);
	~SimpleVector();
	void push_back(const T& value);
	void pop_back();
	int size();
	int capacity();
};

template<typename T>
SimpleVector<T>::SimpleVector(int capacity) {
	currentSize = 0;
	currentCapacity = capacity;
	data = new T[capacity];
}

template<typename T>
SimpleVector<T>::~SimpleVector() {
	delete[] data;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value) {
	if (currentSize < currentCapacity) {
		data[currentSize++];
	}
}

template<typename T>
void SimpleVector<T>::pop_back() {
	if (currentSize > 0) {
		currentSize--;
	}
}

template<typename T>
int SimpleVector<T>::size() {
	return currentSize;
}

template<typename T>
int SimpleVector<T>::capacity() {
	return currentCapacity;
}

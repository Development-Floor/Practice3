#include <iostream>
#include "SimpleVector.hpp"

using namespace std;

int main() {
	SimpleVector<int> simpleVector;

	cout << " ----- 값 넣기 전 simpleVector -----" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	for (int i = 0; i < simpleVector.capacity(); i++) {
		simpleVector.push_back(i);
	}

	cout << "\n --- push_back() 후 simpleVector ---" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	for (int i = 0; i < simpleVector.capacity(); i++) {
		simpleVector.pop_back();
	}

	cout << "\n --- pop_back()  후 simpleVector ---" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	return 0;
}

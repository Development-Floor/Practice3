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

	// ------- 여기부터 과제2 실행

	cout << "\n --- 과제 2 ---\n" << endl;
	cout << "아래부터는 simpleVector를 복사한 copySimpleVector를 사용합니다.\n" << endl;

	// 복사 생성자
	SimpleVector<int> copySimpleVector(simpleVector);

	for (int i = 0; i < copySimpleVector.capacity(); i++) {
		copySimpleVector.push_back(i * 10);
	}

	cout << "copySimpleVector에 들어있는 값" << endl;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << endl;

	cout << "copySimplevector[3] = 70" << endl;

	// indexing
	copySimpleVector[3] = 70;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << "\n" << endl;

	// SimpleVector 클래스의 크기 변화 push_back, resize
	cout << "copySimpleVector의 크기와 최대 크기와 원소" << endl;

	cout << "size: " << copySimpleVector.size() << ", capacity: " << copySimpleVector.capacity() << endl;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << "\n" << endl;

	for (int i = 0; i < 3; i++) {
		copySimpleVector.push_back(i + 1);
	}

	cout << "copySimpleVector에 값 1, 2, 3 추가\n" << endl;

	cout << "size: " << copySimpleVector.size() << ", capacity: " << copySimpleVector.capacity() << endl;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << "\n" << endl;

	cout << "resize 실행\n" << endl;

	copySimpleVector.resize(5);

	cout << "현재 capacity보다 작은 경우 : copySimpleVector.resize(5)" << endl;

	cout << copySimpleVector.size() << " " << copySimpleVector.capacity() << "\n" << endl;

	copySimpleVector.resize(20);

	cout << "현재 capacity보다 큰  경우 : copySimpleVector.resize(20)" << endl;

	cout << copySimpleVector.size() << " " << copySimpleVector.capacity() << "\n" << endl;

	cout << " --- 대입 연산자 ---" << endl;

	SimpleVector<int> simpleVector3;

	simpleVector3.push_back(1);

	SimpleVector<int> simpleVector4 = simpleVector3;

	simpleVector4[0] = 7;

	cout << "simpleVector3[0] = " << simpleVector3[0] << endl;
	cout << "simpleVector4 = simpleVector3" << endl;
	cout << "simpleVector4[0] = " << simpleVector4[0] << "\n" << endl;

	cout << "simpleVector3[0]: " << simpleVector3[0] << endl;
	cout << "simpleVector4[0]: " << simpleVector4[0] << endl;

	return 0;
}
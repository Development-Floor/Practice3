#include <iostream>
#include "SimpleVector.hpp"

using namespace std;

int main() {
	SimpleVector<int> simpleVector;

	cout << " ----- �� �ֱ� �� simpleVector -----" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	for (int i = 0; i < simpleVector.capacity(); i++) {
		simpleVector.push_back(i);
	}

	cout << "\n --- push_back() �� simpleVector ---" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	for (int i = 0; i < simpleVector.capacity(); i++) {
		simpleVector.pop_back();
	}

	cout << "\n --- pop_back()  �� simpleVector ---" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	// ------- ������� ����2 ����

	cout << "\n --- ���� 2 ---\n" << endl;
	cout << "�Ʒ����ʹ� simpleVector�� ������ copySimpleVector�� ����մϴ�.\n" << endl;

	// ���� ������
	SimpleVector<int> copySimpleVector(simpleVector);

	for (int i = 0; i < copySimpleVector.capacity(); i++) {
		copySimpleVector.push_back(i * 10);
	}

	cout << "copySimpleVector�� ����ִ� ��" << endl;

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

	// SimpleVector Ŭ������ ũ�� ��ȭ push_back, resize
	cout << "copySimpleVector�� ũ��� �ִ� ũ��� ����" << endl;

	cout << "size: " << copySimpleVector.size() << ", capacity: " << copySimpleVector.capacity() << endl;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << "\n" << endl;

	for (int i = 0; i < 3; i++) {
		copySimpleVector.push_back(i + 1);
	}

	cout << "copySimpleVector�� �� 1, 2, 3 �߰�\n" << endl;

	cout << "size: " << copySimpleVector.size() << ", capacity: " << copySimpleVector.capacity() << endl;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << "\n" << endl;

	cout << "resize ����\n" << endl;

	copySimpleVector.resize(5);

	cout << "���� capacity���� ���� ��� : copySimpleVector.resize(5)" << endl;

	cout << copySimpleVector.size() << " " << copySimpleVector.capacity() << "\n" << endl;

	copySimpleVector.resize(20);

	cout << "���� capacity���� ū  ��� : copySimpleVector.resize(20)" << endl;

	cout << copySimpleVector.size() << " " << copySimpleVector.capacity() << "\n" << endl;

	cout << " --- ���� ������ ---" << endl;

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
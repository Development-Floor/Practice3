#include <iostream>
#include "SimpleVector.hpp"

using namespace std;

int main() {
	SimpleVector<int> simpleVector;

	cout << " ----- ê°’ ë„£ê¸° ì „ simpleVector -----" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	for (int i = 0; i < simpleVector.capacity(); i++) {
		simpleVector.push_back(i);
	}

	cout << "\n --- push_back() í›„ simpleVector ---" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	for (int i = 0; i < simpleVector.capacity(); i++) {
		simpleVector.pop_back();
	}

	cout << "\n --- pop_back()  í›„ simpleVector ---" << endl;
	cout << "simpleVector.size()    : " << simpleVector.size() << endl;
	cout << "simpleVector.capacity(): " << simpleVector.capacity() << endl;

	// ------- ¿©±âºÎÅÍ °úÁ¦2 ½ÇÇà

	cout << "\n --- °úÁ¦ 2 ---\n" << endl;
	cout << "¾Æ·¡ºÎÅÍ´Â simpleVector¸¦ º¹»çÇÑ copySimpleVector¸¦ »ç¿ëÇÕ´Ï´Ù.\n" << endl;

	// º¹»ç »ý¼ºÀÚ
	SimpleVector<int> copySimpleVector(simpleVector);

	for (int i = 0; i < copySimpleVector.capacity(); i++) {
		copySimpleVector.push_back(i * 10);
	}

	cout << "copySimpleVector¿¡ µé¾îÀÖ´Â °ª" << endl;

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

	// SimpleVector Å¬·¡½ºÀÇ Å©±â º¯È­ push_back, resize
	cout << "copySimpleVectorÀÇ Å©±â¿Í ÃÖ´ë Å©±â¿Í ¿ø¼Ò" << endl;

	cout << "size: " << copySimpleVector.size() << ", capacity: " << copySimpleVector.capacity() << endl;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << "\n" << endl;

	for (int i = 0; i < 3; i++) {
		copySimpleVector.push_back(i + 1);
	}

	cout << "copySimpleVector¿¡ °ª 1, 2, 3 Ãß°¡\n" << endl;

	cout << "size: " << copySimpleVector.size() << ", capacity: " << copySimpleVector.capacity() << endl;

	for (int i = 0; i < copySimpleVector.size(); i++) {
		cout << copySimpleVector[i] << " ";
	}

	cout << "\n" << endl;

	cout << "resize ½ÇÇà\n" << endl;

	copySimpleVector.resize(5);

	cout << "ÇöÀç capacityº¸´Ù ÀÛÀº °æ¿ì : copySimpleVector.resize(5)" << endl;

	cout << copySimpleVector.size() << " " << copySimpleVector.capacity() << "\n" << endl;

	copySimpleVector.resize(20);

	cout << "ÇöÀç capacityº¸´Ù Å«  °æ¿ì : copySimpleVector.resize(20)" << endl;

	cout << copySimpleVector.size() << " " << copySimpleVector.capacity() << "\n" << endl;

	return 0;
}

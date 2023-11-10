/* Напишете програма, която приема номер на месец и отпещатва броя на дните.*/

#include<iostream>
using namespace std;

int n;

int main() {
	system("chcp 1251");
	cout << "Въведете номер на ден: "; cin >> n;
	switch (n) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "31\n"; break;
	case 4: case 6: case 9: case 11: cout << "30\n"; break;
	case 2: cout << "28\n"; break;
	}
	system("pause");
	return 0;
}
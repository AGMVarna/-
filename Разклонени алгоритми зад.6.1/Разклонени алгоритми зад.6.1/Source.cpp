/* Напишете програма, която приема номер на месец и отпещатва броя на дните. 
И в case 2 да пита дали годината е била високосна.
(се дели на 4,но не и на 100 или се дели на 400) */

#include<iostream>
using namespace std;

int n;

int main() {
	system("chcp 1251");
	cout << "Въведете номер на месец: "; cin >> n;
	switch (n) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "31\n"; break;
	case 4: case 6: case 9: case 11: cout << "30\n"; break;
	case 2: int year;
		cout << "Въведете година: "; cin >> year;
		if (year % 400==0 || year % 4==0 && year %100!=0) cout << "28\n";
		  else cout << "29\n";
		break;
	}
	system("pause");
	return 0;
}
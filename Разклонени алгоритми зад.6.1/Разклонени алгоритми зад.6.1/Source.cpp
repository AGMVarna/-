/* �������� ��������, ����� ������ ����� �� ����� � ��������� ���� �� �����. 
� � case 2 �� ���� ���� �������� � ���� ���������.
(�� ���� �� 4,�� �� � �� 100 ��� �� ���� �� 400) */

#include<iostream>
using namespace std;

int n;

int main() {
	system("chcp 1251");
	cout << "�������� ����� �� �����: "; cin >> n;
	switch (n) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "31\n"; break;
	case 4: case 6: case 9: case 11: cout << "30\n"; break;
	case 2: int year;
		cout << "�������� ������: "; cin >> year;
		if (year % 400==0 || year % 4==0 && year %100!=0) cout << "28\n";
		  else cout << "29\n";
		break;
	}
	system("pause");
	return 0;
}
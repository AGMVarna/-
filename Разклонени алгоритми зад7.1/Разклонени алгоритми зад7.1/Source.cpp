/* �������� ��������, ����� ������ �� ������������ ���� ����� � ��������� �� 10 �� 99
� ������� ���������� �� � ����.*/

#include<iostream>
using namespace std;

unsigned n,e,d;

int main() {
	system("chcp 1251");
	cout << "�������� ����� �� 20 �� 99: "; cin >> n;
	e = n % 10; d = n / 10; 
		switch (d) {
		case 2:cout << "��������"; break;
		case 3:cout << "��������"; break;
		case 4:cout << "�����������"; break;
		case 5:cout << "��������"; break;
		case 6:cout << "���������"; break;
		case 7:cout << "����������"; break;
		case 8:cout << "���������"; break;
		case 9:cout << "����������"; break;
		}
	switch (e) {
	case 0:cout << endl; break;
	case 1:cout << " � ����.\n"; break;
	case 2:cout << " � ���.\n"; break;
	case 3:cout << " � ���.\n"; break;
	case 4:cout << " � ������.\n"; break;
	case 5:cout << " � ���.\n"; break;
	case 6:cout << " � ����.\n"; break;
	case 7:cout << " � �����.\n"; break;
	case 8:cout << " � ����.\n"; break;
	case 9:cout << " � �����.\n"; break;
	}
	system("pause");
	return 0;
}
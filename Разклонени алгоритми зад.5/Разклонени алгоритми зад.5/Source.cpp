/* �������� ��������, ����� ������ �� ������������ ���� �����
� ��������� �� 1 �� 7 � ��������� ���������� ��� �� ���������.*/

#include<iostream>
using namespace std;

int n;

int main() {
	system("chcp 1251");
	cout << "�������� ����� �� ��� �� ���������: "; cin >> n;
	switch (n) {
	case 1:cout << "����������\n"; break;
	case 2:cout << "�������\n"; break;
	case 3:cout << "�����\n"; break;
	case 4:cout << "���������\n"; break;
	case 5:cout << "�����\n"; break;
	case 6:cout << "������\n"; break;
	case 7:cout << "������\n"; break;
	defaut:cout << "���� ����� ���\n"; break;
	}
	system("pause");
	return 0;
}
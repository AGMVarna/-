/* �������� ��������, ����� ������ �� ������������ ����� �� 1 �� 7 � ���������
���������� ��� �� ��������� � ��� ���������� ����� � �� ������, �� ����� ��� �� �����.*/ 

#include<iostream>
using namespace std;

unsigned n;

int main() {
	system("chcp 1251");
	cout << "�������� ����� �� ��� �� ���������: "; cin >> n;
	if (n > 7) n = n % 7;
	switch (n) {
	case 0: cout << "���� ����� ���!\n"; break;
	case 1: cout << "����������.\n"; break;
	case 2: cout << "�������.\n"; break;
	case 3: cout << "�����.\n"; break;
	case 4: cout << "���������.\n"; break;
	case 5: cout << "�����.\n"; break;
	case 6: cout << "������.\n"; break;
	case 7: cout << "������.\n"; break;
	}
	system("pause");
	return 0;
}
/* �������� ��������, ����� ������ �� ������������ ���� �����
�� 0 �� 19 � ��������� ������� � ����.*/

#include<iostream>
using namespace std;

unsigned n,e,d;

int main() {
	system("chcp 1251");
	cout << "�������� ����� �� 0 �� 19: "; cin >> n;
	e = n % 10;
	d = n / 10;
	if (e == 0) {
		if (d) cout << "�����";
		else cout << "����";
	}
	else{
		switch (e) {
		case 1: if (n > 10) cout << "���"; else cout << "����\n"; break;
		case 2: if (n > 10) cout << "���"; else cout << "���\n"; break;
		case 3: cout << "���"; break;
		case 4:cout << "������"; break;
		case 5:cout << "���"; break;
		case 6:cout << "����"; break;
		case 7:cout << "�����"; break;
		case 8:cout << "����"; break;
		case 9:cout << "�����"; break;
		}
	}
	if (n>10)
		cout << "�������\n";
	else cout << endl;
	
}
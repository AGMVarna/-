/*�������� ��������, ����� ������ �� ������������ ��������� �� "���"
(� ����) (xt, yt) � ��������� �� ����� ������ (xf,yf). 
���������� �� ��������� "Yes". ��� ���� ���������� �������� � "No", � �������� ������.*/

#include<iostream>;
using namespace std;

int xt, yt, xf, yf;

int main() {
	system("chcp 1251");
	cout << "�������� ��������� �� ���: "; cin >> xt >> yt;
	cout << "�������� ��������� �� ����� ������: "; cin >> xf >> yf;
	if (xt == xf || yt == yf)
		cout << "Yes";
	else
		cout << "No";

	system("pause");
	return 0;
}
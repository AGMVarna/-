/*�������� ��������, ����� ������ �� ������������ ��������� �� "������"
(� ����) (xc, yc) � ��������� �� ����� ������ (xf,yf).
���������� �� ��������� "Yes". ��� ���� ���������� �������� � "No", � �������� ������.*/

#include<iostream>;
using namespace std;

int xc, yc, xf, yf;

int main() {
	system("chcp 1251");
	cout << "�������� ��������� �� ������: "; cin >> xc >> yc;
	cout << "�������� ��������� �� ����� ������: "; cin >> xf >> yf;
	if (abs(xc - xf) == abs(yc - yf)||xc==xf||yc==yf)
		cout << "Yes\n";
	else
		cout << "No\n";

	system("pause");
	return 0;
}
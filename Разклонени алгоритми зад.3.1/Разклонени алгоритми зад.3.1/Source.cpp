/*�������� ��������, ����� ������ �� ������������ ��������� �� "������"
(� ����) (xof, yof) � ��������� �� ����� ������ (xf,yf).
���������� �� ��������� "Yes". ��� ���� ���������� �������� � "No", � �������� ������.*/

#include<iostream>;
using namespace std;

int xof, yof, xf, yf;

int main() {
	system("chcp 1251");
	cout << "�������� ��������� �� ������: "; cin >> xof>> yof;
	cout << "�������� ��������� �� ����� ������: "; cin >> xf >> yf;
	if (abs(xof-xf)==abs(yof-yf))
		cout << "Yes\n";
	else
		cout << "No\n";

	system("pause");
	return 0;
}
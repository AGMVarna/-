/* ����������� �� ���� ����� ����� ���� �� ���� ���������, ��� ����� ���������� 
�� �������� ��� �������: 
1.������� ������ �� �?(4,5,6)
2.������� ���� �� �� �� 2?
3.������� ���� �� �� �� 3? */

#include<iostream>
using namespace std;

int n1,n2,n3;

int main() {
	system("chcp 1251");
	cout << "������� ������ �� � ? (4, 5, 6): "; cin >> n1;
	cout << "������� ���� �� �� �� 2 ?: "; cin >> n2;
	cout<<"������� ���� �� �� �� 3 ? : "; cin>>n3;
	if (n1) {
		if (n2) {
			if (n3)
				cout << "6\n";
			else cout << "4\n";
		}
		else cout << "5\n";
	}
	else if (!n1) {
		if (n2) cout << "2\n";
		else {
			if (n3) cout << "3\n";
			else cout << "1\n";
		}
	}
	system("pause");
	return 0;
}
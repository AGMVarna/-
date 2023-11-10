/*Напишете програма, която приема от клавиатурата позицията на "царица"
(в шаха) (xc, yc) и позицията на друга фигура (xf,yf).
Програмата да отпечатва "Yes". ако топа застрашава фигурата и "No", в противен случай.*/

#include<iostream>;
using namespace std;

int xc, yc, xf, yf;

int main() {
	system("chcp 1251");
	cout << "Въведете позицията на царица: "; cin >> xc >> yc;
	cout << "въведете позицията на друга фигура: "; cin >> xf >> yf;
	if (abs(xc - xf) == abs(yc - yf)||xc==xf||yc==yf)
		cout << "Yes\n";
	else
		cout << "No\n";

	system("pause");
	return 0;
}
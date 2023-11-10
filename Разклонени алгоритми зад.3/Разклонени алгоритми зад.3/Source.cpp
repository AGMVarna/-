/*Напишете програма, която приема от клавиатурата позицията на "топ"
(в шаха) (xt, yt) и позицията на друга фигура (xf,yf). 
Програмата да отпечатва "Yes". ако топа застрашава фигурата и "No", в противен случай.*/

#include<iostream>;
using namespace std;

int xt, yt, xf, yf;

int main() {
	system("chcp 1251");
	cout << "Въведете позицията на топ: "; cin >> xt >> yt;
	cout << "въведете позицията на друга фигура: "; cin >> xf >> yf;
	if (xt == xf || yt == yf)
		cout << "Yes";
	else
		cout << "No";

	system("pause");
	return 0;
}
/*Напишете програма, която приема от клавиатурата позицията на "офицер"
(в шаха) (xof, yof) и позицията на друга фигура (xf,yf).
Програмата да отпечатва "Yes". ако топа застрашава фигурата и "No", в противен случай.*/

#include<iostream>;
using namespace std;

int xof, yof, xf, yf;

int main() {
	system("chcp 1251");
	cout << "Въведете позицията на офицер: "; cin >> xof>> yof;
	cout << "въведете позицията на друга фигура: "; cin >> xf >> yf;
	if (abs(xof-xf)==abs(yof-yf))
		cout << "Yes\n";
	else
		cout << "No\n";

	system("pause");
	return 0;
}
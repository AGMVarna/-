#include<iostream>
using namespace std;

/* Напишете програма, която приема от клавиатурата година (цяло четирицифрено число) и отпечатва
"Yes", ако годината е щастлива и "No", ако не е.*/

unsigned num, e, d, s, h;

int main() {
	system("chcp 1251");
	cout << "Въведете година: "; cin >> num;
	e = num % 10;
	d = (num / 10)%10;
	s = (num / 100) % 10;
	h = num / 1000;
	if (e == d || e == s || e == h || d == s || d == h || s == h)
		cout << "Yes\n";
	else cout << "No\n";
	system("pause");
	return 0;
}
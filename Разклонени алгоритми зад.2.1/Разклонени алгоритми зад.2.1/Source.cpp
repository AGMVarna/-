/*Ако годината е твърде щтастлива(точно 2 еднакви */

#include<iostream>
using namespace std;

unsigned n, e, d, s, h;

int main() {
	system("chcp 1251");
	cout << "Въведете година: "; cin >> n;
	e = n % 10;
	d = (n / 10) % 10;
	s = (n / 100) % 10;
	h = n / 1000;
	if (e == d && e != s && e != h && d != s && d != h && s != h)
		cout << "Yes\n";
	else if (e != d && e == s && e != h && d != s && d != h && s != h)
		cout << "Yes\n";
	else if (e != d && e != s && e == h && d != s && d != h && s != h)
		cout << "Yes\n";
	else if (e != d && e != s && e != h && d == s && d != h && s != h)
		cout << "Yes\n";
	else if (e != d && e != s && e != h && d != s && d == h && s != h)
		cout << "Yes\n";
	else if (e != d && e != s && e == h && d != s && d != h && s == h)
		cout << "Yes\n";
	else cout << "No\n";
		system("pause");
	return 0;
}
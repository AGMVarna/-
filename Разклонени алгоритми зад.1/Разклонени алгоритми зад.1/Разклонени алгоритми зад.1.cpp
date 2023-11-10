#include<iostream>
using namespace std;

int num;

int main() {
	system("chcp 1251");
	cout << "Въведете цяло число: "; cin >> num;
	if (num % 2 == 0)
		cout << "Четно\n";
	else cout << "Нечетно\n";
	system("pause");
	return 0;
}
/* Напишете програма, която приема от клавиатурата цяло число и отпечатва "Yes", ако е четно и "No", ако е нечетно. */
/* Напишете програма, която приема от клавиатурата цяло число
в интервала от 1 до 7 и отпечатва съответния ден от седмицата.*/

#include<iostream>
using namespace std;

int n;

int main() {
	system("chcp 1251");
	cout << "Въведете номер на ден от седмицата: "; cin >> n;
	switch (n) {
	case 1:cout << "Понеделник\n"; break;
	case 2:cout << "Вторник\n"; break;
	case 3:cout << "Сряда\n"; break;
	case 4:cout << "Четвъртък\n"; break;
	case 5:cout << "Петък\n"; break;
	case 6:cout << "Събота\n"; break;
	case 7:cout << "Неделя\n"; break;
	defaut:cout << "Няма такъв ден\n"; break;
	}
	system("pause");
	return 0;
}
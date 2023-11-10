/* Напишете програма, която приема от клавиатурата число от 1 до 7 и отпечатва
съответния ден от седмицата и ако въведеното число е по голямо, да връща пак на дните.*/ 

#include<iostream>
using namespace std;

unsigned n;

int main() {
	system("chcp 1251");
	cout << "Въведете номер на ден от седмицата: "; cin >> n;
	if (n > 7) n = n % 7;
	switch (n) {
	case 0: cout << "Няма нулев ден!\n"; break;
	case 1: cout << "Понеделник.\n"; break;
	case 2: cout << "Вторник.\n"; break;
	case 3: cout << "Сряда.\n"; break;
	case 4: cout << "Четвъртък.\n"; break;
	case 5: cout << "Петък.\n"; break;
	case 6: cout << "Събота.\n"; break;
	case 7: cout << "Неделя.\n"; break;
	}
	system("pause");
	return 0;
}
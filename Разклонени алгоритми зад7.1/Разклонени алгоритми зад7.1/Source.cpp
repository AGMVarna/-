/* Напишете програма, която приема от клавиатурата цяло число в интервала от 10 до 99
и изписва стойността му с думи.*/

#include<iostream>
using namespace std;

unsigned n,e,d;

int main() {
	system("chcp 1251");
	cout << "Въведете число от 20 до 99: "; cin >> n;
	e = n % 10; d = n / 10; 
		switch (d) {
		case 2:cout << "Двадесет"; break;
		case 3:cout << "Тридесет"; break;
		case 4:cout << "Четиридесет"; break;
		case 5:cout << "Петдесет"; break;
		case 6:cout << "Шестдесет"; break;
		case 7:cout << "Седемдесет"; break;
		case 8:cout << "Осемдесет"; break;
		case 9:cout << "Деветдесет"; break;
		}
	switch (e) {
	case 0:cout << endl; break;
	case 1:cout << " и едно.\n"; break;
	case 2:cout << " и две.\n"; break;
	case 3:cout << " и три.\n"; break;
	case 4:cout << " и четири.\n"; break;
	case 5:cout << " и пет.\n"; break;
	case 6:cout << " и шест.\n"; break;
	case 7:cout << " и седем.\n"; break;
	case 8:cout << " и осем.\n"; break;
	case 9:cout << " и девет.\n"; break;
	}
	system("pause");
	return 0;
}
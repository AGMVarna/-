/* Напишете програма, която приема от клавиатурата цяло число
от 0 до 19 и отпечатва числото с думи.*/

#include<iostream>
using namespace std;

unsigned n,e,d;

int main() {
	system("chcp 1251");
	cout << "Въведете число от 0 до 19: "; cin >> n;
	e = n % 10;
	d = n / 10;
	if (e == 0) {
		if (d) cout << "Десет";
		else cout << "Нула";
	}
	else{
		switch (e) {
		case 1: if (n > 10) cout << "Еди"; else cout << "Едно\n"; break;
		case 2: if (n > 10) cout << "Два"; else cout << "Две\n"; break;
		case 3: cout << "Три"; break;
		case 4:cout << "Четири"; break;
		case 5:cout << "Пет"; break;
		case 6:cout << "Шест"; break;
		case 7:cout << "Седем"; break;
		case 8:cout << "Осем"; break;
		case 9:cout << "Девет"; break;
		}
	}
	if (n>10)
		cout << "надесет\n";
	else cout << endl;
	
}
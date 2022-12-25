#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	cout << "---------------------------------------\n";

	cout << "Home task #12\n\n";

	int menu, step;
	const int size1 = 10;
	const int size2 = 12;
	cout << "Выберете фигуру\n"
		<< "1-a\n"
		<< "2-б\n"
		<< "3-в\n"
		<< "4-г\n"
		<< "5-д\n"
		<< "6-е\n"
		<< "7-ж\n"
		<< "8-з\n"
		<< "9-и\n"
		<< "10-к\n"
		<< "0-выход\n";
	cin >> menu;
	switch (menu)
	{
	case 1:
		cout << "Вы выбрали вариант а\n";
		for (int i = 0; i < size1; i++) {
			for (int j = 0; j < size1; j++) {
				if (j >= i)cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 2:
		cout << "Вы выбрали вариант б\n";
		for (int i = 0; i < size1; i++) {
			for (int j = 0; j < size1; j++) {
				if (j <= i)cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 3:
		cout << "Вы выбрали вариант в\n";
		for (int i = 0; i <= size2 / 2; i++) {
			for (int j = 0; j <= size2 - i; j++) {
				if (j >= i)cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 4:
		cout << "Вы выбрали вариант г\n";
		step = 1;
		for (int i = 0; i < size2; i++) {
			if (i <= size2 / 2 - 1) cout << "\n";
			else {
				for (int j = 0; j < i; j++) {
					if (j >= i - step)cout << "*";
					else cout << " ";
				}
				step += 2;
				cout << endl;
			}
		}
		break;
	case 5:
		cout << "Вы выбрали вариант д\n";
		step = 1;
		for (int i = 0; i <= size2; i++) {
			if (i <= size2 / 2) {
				for (int j = 0; j <= size2 - i; j++) {
					if (j >= i)cout << "*";
					else cout << " ";
				}
				cout << endl;
			}
			else {
				for (int j = 0; j < i; j++) {
					if (j >= i - step)cout << "*";
					else cout << " ";
				}
				step += 2;
				cout << endl;
			}
		}
		break;
	case 6:
		cout << "Вы выбрали вариант е\n";
		for (int i = 0, j = 1, k = 6; i < 7; i++) {
			if (i < 7 / 2) {
				cout << string(j, '*') << string(k, ' ') << string(j, '*') << endl;
				j++; k -= 2;
			}
			else if (i == 7 / 2) {
				cout << string(8, '*') << endl;
				j--; k += 2;
			}
			else {
				cout << string(j, '*') << string(k, ' ') << string(j, '*') << endl;
				j--; k += 2;
			}
		}
		break;
	case 7:
		cout << "Вы выбрали вариант ж\n";
		step = 7;
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 8; j++) {
				if (i <= 7 / 2) {
					if (j <= i) {
						cout << '*';
					}
					else {
						cout << ' ';
					}
				}
				else {
					if (j < step) {
						cout << '*';
					}
					else {
						cout << ' ';
					}
				}
			}
			cout << endl;
			step--;
		}
		break;
	case 8:
		cout << "Вы выбрали вариант з\n";
		step = 7;
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 8; j++) {
				if (i >= 7 / 2) {
					if (j <= i) {
						cout << ' ';
					}
					else {
						cout << '*';
					}
				}
				else {
					if (j >= step) {
						cout << '*';
					}
					else {
						cout << ' ';
					}
				}
			}
			cout << endl;
			step--;
		}
		break;
	case 9:
		cout << "Вы выбрали вариант и\n";
		for (int i = size1; i > 0; i--) {
			for (int j = 0; j < size1; j++) {
				if (j >= i)cout << " ";
				else cout << "*";
			}
			cout << endl;
		}
		break;
	case 10:
		cout << "Вы выбрали вариант к\n";
		for (int i = size1; i > 0; i--) {
			for (int j = 0; j < size1; j++) {
				if (j >= i)cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		break;
	case 0:
		cout << "Досвидания!)\n";
		break;
	default:
		cout << "Неверный пункт меню!\n";
		break;
	}
}
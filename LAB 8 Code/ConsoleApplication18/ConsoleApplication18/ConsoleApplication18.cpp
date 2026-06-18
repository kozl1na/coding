#include <iostream>
#include <cmath>

using namespace std;

bool func(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return true;
		}
	}
}


int main() {
	setlocale(LC_ALL, "");
	int massiv[1000];
	int size;
	cout << "Размерность массива: ";
	cin >> size;
	cout << "Заполнение массива: ";
	for (int i = 0; i < size; i++) {
		cin >> massiv[i];
	}
	int summa = 0;
	for (int i = 0; i < size; i++) {
		if (func(massiv[i])) {
			summa += massiv[i];
		}
	}
	cout << "Результат: " << summa;
	return 0;
}

//4 3 6 7 8
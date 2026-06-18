#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	double a;
	double b;
	double c;
	cout << "Введем три числа : ";
	cin >> a >> b >> c;

	if (a == b || a == c || b == c) {
		cout << "Есть пара равных чисел.";
	} else { 
		cout << "Нет пар равных чисел.";
	}
	return 0;
}


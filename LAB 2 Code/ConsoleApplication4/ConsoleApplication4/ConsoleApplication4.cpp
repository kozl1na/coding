#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	double x, y;
	cout << "Введём координаты (x, y): ";
	cin >> x >> y;

	if (x >= 0 && x <= 1 && y >= 0 && y <= 1) {
		cout << "Точка принадлежит области.";
	}
	else {
		cout << "Точка не принадлежит области.";
	}
	return 0;
}
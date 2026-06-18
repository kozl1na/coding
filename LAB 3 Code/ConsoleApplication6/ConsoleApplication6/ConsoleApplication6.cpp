#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int n;
	cout << "Введем кол-во действительных чисел (>=3): ";
	cin >> n;

	if (n < 3) {
		cout << "Ошибка";
		return 1;
	}

	double *hranit = new double[n];
	cout << "Заполним массив количсетвом " << n << " значений: ";
	for (int i = 0; i < n; i++) {
		cin >> hranit[i];
	}
	double resh = 1;

	for (int i = 0; i < n - 2; i++) {
		resh *= (hranit[i] + 2 * hranit[i + 1] + hranit[i + 2]);
	}
	cout << "Результат: " << resh;

	return 0;
}


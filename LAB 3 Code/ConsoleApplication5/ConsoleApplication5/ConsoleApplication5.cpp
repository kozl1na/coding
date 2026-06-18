#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int n, m;
	int summa = 0;
	cout << "Введём кол-во цифр m и число n: ";
	cin >> m >> n;
	int nachalnoe_n = n;

	for (int i = 0; i < m && n > 0; i++) {
		summa += n % 10;
		n /= 10;
	}
	
	cout << "Сумма последних " << m << " числа " << nachalnoe_n << ": " << summa;
	
	return 0;

}
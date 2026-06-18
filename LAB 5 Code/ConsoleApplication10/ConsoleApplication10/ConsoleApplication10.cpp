#include <iostream>

using namespace std;

int rekurs_func_fib(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return rekurs_func_fib(n - 1) + rekurs_func_fib(n - 2);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int summa_fib = 0; 
	int index_fib = 0;
	int chislo_fib; 
	while (true) {
		chislo_fib = rekurs_func_fib(index_fib);
		if (chislo_fib > 1000) {
			break;
		}
		summa_fib += chislo_fib;
		index_fib += 1;
	}
	cout << "Ответ: " << summa_fib;
	return 0;
}
#include <iostream>

using namespace std;

int func_rekurs(int massiv[], int index, int n) {
	if (index == n) {
		return 1;
	}
	else {
		return massiv[index] * func_rekurs(massiv, index + 1, n);
	}
} 

int main() {
	setlocale(LC_ALL, "");
	const int time_size = 10000;
	int massiv[time_size];
	int n;
	cout << "Размерность массива: ";
	cin >> n;
	cout << "Заполнение массива: ";
	for (int i = 0; i < n; i++) {
		cin >> massiv[i];
	}
	int answer = func_rekurs(massiv, 0, n);
	cout << "Ответ: " << answer;
	return 0;
}

//1 2 3 4 5 6 7 8 9 3
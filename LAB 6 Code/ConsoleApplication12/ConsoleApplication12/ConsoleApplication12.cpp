#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string stroka_1;
	string stroka_2;
	string answer;
	cout << "Первая строка: ";
	cin >> stroka_1;
	cout << "Вторая строка: ";
	cin >> stroka_2;

	for (char bykva : stroka_1) {
		for (char bykva_1 : stroka_2) {
			if (bykva == bykva_1) { 
				answer += bykva;
			}
		}
	}
	if (answer != "") {
		cout << "Общие буквы: " << answer;
	}
	else {
		cout << "Нет общих букв.";
	}

	return 0;
}
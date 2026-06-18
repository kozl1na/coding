#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float chislo;
	float res;
	cout << "Вводим число: ";
	cin >> chislo;
	res = chislo * 0.2;
	cout << "Ответ: " << res;
	
	return 0;
}
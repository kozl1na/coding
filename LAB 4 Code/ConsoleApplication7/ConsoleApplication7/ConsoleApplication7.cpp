#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int n;
    cout << "Введите количество чисел (>=3): ";
    cin >> n;

    if (n < 3) {
        cout << "Ошибка";
        return 1;
    }

    double x1;
    double x2;
    double x3;
    double result = 1;

    cout << "Вводим три числа: ";
    cin >> x1 >> x2 >> x3;

    result *= (x1 + 2 * x2 + x3);

    for (int i = 4; i <= n; i++) {
        
        double new_chislo;
        cin >> new_chislo; 

     
        result *= (x2 + 2 * x3 + new_chislo);

        x1 = x2;
        x2 = x3;
        x3 = new_chislo;
    }

    cout << "Результат: " << result;

    return 0;
}

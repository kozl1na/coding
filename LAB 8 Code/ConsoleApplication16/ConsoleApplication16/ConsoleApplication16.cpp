#include <iostream>
using namespace std;

void p(double x[], double y[], int size) {
    double summa = 0;
    double m = 0;
    for (int i = 0; i < size; i++) {
        summa += x[i];
    }
    m = summa / size;
    for (int i = 0; i < size; i++) {
        y[i] = x[i] - m;
    }
}

int main() {
    setlocale(LC_ALL, "");

    int size;
    cout << "Размерность массива: ";
    cin >> size;

    double x[1000], y[1000];
    cout << "Заполняем массив x: ";
    for (int i = 0; i < size; i++) {
        cin >> x[i];
    }

    p(x, y, size);

    cout << "Результат: ";
    for (int i = 0; i < size; i++) {
        cout << y[i] << " ";
    }
    cout << endl;

    return 0;
}

//5.3 4.6 2.8 9.3 7.5
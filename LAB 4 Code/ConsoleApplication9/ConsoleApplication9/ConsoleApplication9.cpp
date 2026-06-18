#include <iostream>

using namespace std;

bool prostoe(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int summa_prostix(int massiv[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (prostoe(massiv[i])) {
            sum += massiv[i];
        }
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "");

    int kolvo_strok, kolvo_stolbec;
    cout << "Введите количество строк и столбцов: ";
    cin >> kolvo_strok >> kolvo_stolbec;

    int matrix[100][100];
    int massiv_prostix[100];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < kolvo_strok; i++) {
        for (int j = 0; j < kolvo_stolbec; j++) {
            cin >> matrix[i][j];
        }
        massiv_prostix[i] = summa_prostix(matrix[i], kolvo_stolbec);
    }
    for (int i = 0; i < kolvo_strok - 1; i++) {
        for (int j = 0; j < kolvo_strok - i - 1; j++) {
            if (massiv_prostix[j] < massiv_prostix[j + 1]) {
                for (int k = 0; k < kolvo_stolbec; k++) {
                    int copy = matrix[j][k];
                    matrix[j][k] = matrix[j + 1][k];
                    matrix[j + 1][k] = copy;
                }
                int coppy_summa_prostix = massiv_prostix[j];
                massiv_prostix[j] = massiv_prostix[j + 1];
                massiv_prostix[j + 1] = coppy_summa_prostix;
            }
        }
    }

    cout << "Ответ:" << "\n";
    for (int i = 0; i < kolvo_strok; i++) {
        for (int j = 0; j < kolvo_stolbec; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//7 3 6 4
//9 0 2 5
//5 2 8 3
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string s;
    string word;
    string last_word;
    char first_bykva;
    cout << "Начальная строка S: ";
    getline(cin, s);
    for (char bykva : s) {
        if (bykva != ' ') {
            word += bykva;
        }
        else {
            if (word != "") {
                last_word = word;
                word = "";
            }
        }
    }
    if (word != "") {
        last_word = word;
    }

    first_bykva = last_word[0];

    word = "";

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            word = s[i] + word;
        }
        if (word != "") {
            if (word[0] == first_bykva) {
                cout << word << " ";
                word = "";
            }
            else if (word[0] != first_bykva and s[i] == ' ') {
                word = "";
            }

        }
    }
    if (word != "" && word[0] == first_bykva) {
        cout << word;
    }
    return 0;
}



//тунец палка комп туман танец камень томь
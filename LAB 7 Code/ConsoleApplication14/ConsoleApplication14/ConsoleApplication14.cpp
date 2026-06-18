#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

struct train {
	string name;
	char gender;
	int age;
	int number_wagon;
	string category_wagon;
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << "Кол-во пассажиров: ";
	cin >> n;

	train* pas_train = new train[n];

	for (int i = 0; i < n; i++) {
		cout << "\nФИО пассажира: ";
		cin >> pas_train[i].name;

		cout << "Пол(m/f): ";
		cin >> pas_train[i].gender;

		cout << "Возраст (полных лет): ";
		cin >> pas_train[i].age;

		cout << "Номер вагона: ";
		cin >> pas_train[i].number_wagon;

		cout << "Категория вагона: ";
		cin >> pas_train[i].category_wagon;
	}

	ofstream FIRST_TRAIN_F("work.txt");
	for (int i = 0; i < n; i++) {
		FIRST_TRAIN_F << pas_train[i].name << " "
			<< pas_train[i].gender << " "
			<< pas_train[i].age << " "
			<< pas_train[i].number_wagon << " "
			<< pas_train[i].category_wagon << "\n";
	}
	FIRST_TRAIN_F.close();

	int K;
	cout << "\nПАССАЖИРЫ С НОМЕРОМ ВАГОНА: ";
	cin >> K;

	ifstream TRAIN_F("work.txt");

	bool proverka = false;

	for (int i = 0; i < n; i++) {
		if (pas_train[i].number_wagon == K) {
			proverka = true;
			cout << "\nФИО пассажира: " << pas_train[i].name << endl;
			cout << "Пол (m/f): " << pas_train[i].gender << endl;
			cout << "Возраст (полных лет): " << pas_train[i].age << endl;
			cout << "Категория вагона: " << pas_train[i].category_wagon << endl;
		}
	}

	if (!proverka) {
		cout << "Нет пассажиров в вагоне с номером " << K << "." << endl;
	}
	delete[] pas_train;
	return 0;
}

	//Иванов_Иван
	//Плацкарт
	//Петров_Петр
	//Купе
	//Смирнов_Алексей
	//Плацкарт
	//Сидорова_Анна
	//Купе
	//Кузьмин_Павел
	//Купе
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

struct work {
	string name;
	char gender;
	int age;
	string department;
};

int main() {
	SetConsoleCP(1251);         
	SetConsoleOutputCP(1251);

	int n;
	cout << "Кол-во работников: ";
	cin >> n;

	work* rabotnik = new work[n];

	for (int i = 0; i < n; i++) {
		cout << "\nФИО работника: ";
		cin >> rabotnik[i].name;

		cout << "Пол(m/f): ";
		cin >> rabotnik[i].gender;

		cout << "Возраст (полных лет): ";
		cin >> rabotnik[i].age;

		cout << "Наименование подразделения: ";
		cin >> rabotnik[i].department;
	}

	ofstream FIRST_FILE("work.txt");
	for (int i = 0; i < n; i++) {
		FIRST_FILE << rabotnik[i].name << " "
			<< rabotnik[i].gender << " "
			<< rabotnik[i].age << " "
			<< rabotnik[i].department << "\n";
	}
	FIRST_FILE.close();

	ifstream FILE("work.txt");

	cout << "\nДАННЫЕ ИЗ ФАЙЛА:\n";
	for (int i = 0; i < n; i++) {
		FILE >> rabotnik[i].name;
		FILE >> rabotnik[i].gender;
		FILE >> rabotnik[i].age;
		FILE >> rabotnik[i].department;

		cout << "\nФИО работника: " << rabotnik[i].name << endl;
		cout << "Пол (м/ж): " << rabotnik[i].gender << endl;
		cout << "Возраст (полных лет): " << rabotnik[i].age << endl;
		cout << "Наименование подразделения: " << rabotnik[i].department << endl;
	}

	FILE.close();
	delete[] rabotnik; 
	return 0;
}

//Петров_Иван
//Маркетинг
//Сидорова_Анна
//Бухгалтерия
//Кузьмин_Павел
//Разработка
//Иванова_Ольга
//Тестирование
//Смирнов_Алексей
//Продажи


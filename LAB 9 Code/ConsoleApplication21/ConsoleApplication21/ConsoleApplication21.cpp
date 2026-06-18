#include <iostream>
#include <windows.h>

using namespace std;

struct WORKER {
	string NAME;
	string POS;
	int YEAR;

};


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	WORKER TABL[10];

	int year_now = 2025;


	for (int i = 0; i < 10; i++) {
		cout << "Введём ФИО работника, должность и год поступления на работу: ";
		cin >> TABL[i].NAME >> TABL[i].POS >> TABL[i].YEAR;
	}

	int min_work_experience;
	cout << "Минимальный стаж работы: ";
	cin >> min_work_experience;


	bool proverka = false;

	for (int i = 0; i < 10; i++) {
		int work_experience = year_now - TABL[i].YEAR;
		if (work_experience > min_work_experience) {
			cout << "ФИО: " << TABL[i].NAME << "\n";
			proverka = true;
		}
	}
	if (proverka != true) {
		cout << "Подходящих работников не нашлось.";
	}
	return 0;
}

//Иванов_И.И. Аналитик 2020

//Сидоров_С.С. Разработчик 2019

//Кузнецов_К.К. Маркетолог 2021

//Васильев_В.В. Инженер 2017

//Михайлов_М.М. Дизайнер 2022

//Фёдоров_Ф.Ф. Экономист 2016

//Алексеев_А.А. Логист 2018

//Николаев_Н.Н. Программист 2023

//Орлов_О.О. Финансист 2015

//Романов_Р.Р. Юрист 2019
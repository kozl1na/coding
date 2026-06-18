#include <iostream>
#include <windows.h>

using namespace std;

struct sport {
	string surname;
	int age;
	float height;
};



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N;
	cout << "Кол-во спортсменов: ";
	cin >> N;

	sport *people = new sport[N];

	for (int i = 0; i < N; i++) {
		cout << "Введем фамилию, возраст и рост спортсмена: ";
		cin >> people[i].surname >> people[i].age >> people[i].height;
	}

	int max_height_index = 0;

	for (int i = 0; i < N; i++) {
		if (people[i].height > people[max_height_index].height) {
			max_height_index = i;
		}
	}

	cout << "Самый высокий спортсмен - " << people[max_height_index].surname;

	return 0;
}

//Иванов 27 185
//Петров 19 190
//Сидоров 24 187
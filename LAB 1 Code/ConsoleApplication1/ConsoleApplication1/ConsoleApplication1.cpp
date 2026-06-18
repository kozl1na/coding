#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "");
	int age;
	cout << "Input age: ";
	cin >> age;
	cout << "Surname: Козлов" << "\n";
	cout << "Name: Егор" << "\n";
	cout << "Number of group: 584-1" << "\n";
	cout << "Age: " << age << "\n";
	cout << "Other info: Я люблю пельмени.";

	return 0; 
}
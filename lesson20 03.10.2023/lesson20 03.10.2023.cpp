#include <iostream>
#include <Windows.h>

#include "Student.h"
#include "Teacher.h"
#include "Driver.h"
#include "Doctor.h"

using namespace std;


int main() {
	setlocale(0, "");
	SetConsoleCP(1251);

	Student obj("Nikolay", 18, "ITStep");
	obj.Print();

	int tempNumber;
	char** items;
	char temp[50];

	cout << "Введите кол-во предметов: ";
	cin >> tempNumber;

	items = new char* [tempNumber];

	for (int i = 0; i < tempNumber; i++) {
		cout << "Введите предмет: ";
		cin >> temp;

		items[i] = new char[strlen(temp) + 1];
		strcpy_s(items[i], strlen(temp) + 1, temp);
	}
	cout << endl;

	/*for (int i = 0; i < tempNumber; i++) {
		cout << items[i] << endl;
	}*/
	
	Teacher obj1("NameTeacher", 20, "School", 15000, tempNumber, items);
	obj1.Print();

	/*
	obj1.Input();
	obj1.Print();
	cout << endl;
	*/

	Driver driver("Nikolay", 18, "X65TR", 222456, 77756651);
	driver.Print();
	cout << endl;
	driver.Input("X65TR", 222456, 77756651);
	cout << endl;
	driver.Print();

	int specialtiesNumber = 2;
	string tempStr;
	string* specialties = new string[specialtiesNumber];
	for (int i = 0; i < specialtiesNumber; i++) {
		cout << "Введите специальность: ";
		cin >> tempStr;
		specialties[i] = tempStr;
	}
		

	Doctor doctor("Nikolay", 18, specialties, specialtiesNumber, 3, true);
	doctor.Print();


	return 0;
}


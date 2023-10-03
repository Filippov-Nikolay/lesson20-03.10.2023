#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(const char* n, int a, const char* u) :Person(n, a) {
	// cout << "Student constructor" << endl;
	University = new char[strlen(u) + 1];
	strcpy_s(University, strlen(u) + 1, u);
}
Student::~Student() {
	// cout << "Student destructor" << endl;
	delete[] University;
}

void Student::Print() {
	Person::Print();
	cout << "Univursity: " << University << endl;
}

void Student::Input(const char* u) {
	if (University != nullptr) {
		delete[] University;
	}

	University = new char[strlen(u) + 1];
	strcpy_s(University, strlen(u) + 1, u);
	Person::Input();
}
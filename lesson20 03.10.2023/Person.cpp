#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(const char* n, int a) :age(a) {
	// cout << "Person constructor" << endl;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
Person::~Person() {
	// cout << "Person destructor" << endl;
	delete[] name;
}


void Person::Print() {
	cout << "Name: " << name << ", age: " << age << endl;
}
void Person::Input() {
	char temp[50];
	cout << "Enter name: ";
	cin >> temp;

	name = new char[strlen(name) + 1];
	strcpy_s(name, strlen(temp) + 1, temp);

	cout << "Enter age: ";
	cin >> age;
}
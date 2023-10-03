#pragma once
#include "Person.h"

class Student : public Person {
	char* University;
public:
	Student(const char* n, int a, const char* u);
	~Student();

	void Print();
	void Input(const char* u);
};



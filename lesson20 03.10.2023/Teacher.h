#pragma once
#include "Person.h"

class Teacher : public Person {
	char* school;
	int salary;
	int numberOfItems;
	char** items;
public:
	Teacher(const char* n, int a, const char* s, int sl, int noi, char** it);
	~Teacher();

	void Input();
	void Print();
};


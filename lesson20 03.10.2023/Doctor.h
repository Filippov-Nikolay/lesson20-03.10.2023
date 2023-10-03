#pragma once
#include <iostream>

#include "Person.h"

using namespace std;

class Doctor : public Person {
	string* speciality;
	int numberOfSpecialties;
	int experience;
	bool familyDoctor;
public:
	Doctor(const char* n, int a, string* sp, int nos, int exp, bool fd);
	~Doctor();

	void Input();
	void Print();
};


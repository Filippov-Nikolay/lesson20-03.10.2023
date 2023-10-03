#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class Driver : public Person {
	string numberOfTheCar;
	int passportSeries;
	int passportID;
public:
	Driver(const char* n, int a, string notc, int ps, int pID);

	void Input(string notc, int ps, int pID);
	void Print();
};
#pragma once

class Person {
protected:
	char* name;
	int age;
public:
	Person() = default;
	Person(const char* n, int a);
	~Person();

	void Print();
	void Input();
};
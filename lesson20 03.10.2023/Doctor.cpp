#include "Doctor.h"
#include "Person.h"

using namespace std;

Doctor::Doctor(const char* n, int a, string* sp, int nos, int exp, bool fd) : Person(n, a) {
	numberOfSpecialties = nos;
	speciality = new string[numberOfSpecialties];
	speciality = sp;
	experience = exp;
	familyDoctor = fd;
}
Doctor::~Doctor() {
	delete[] speciality;
}

void Doctor::Input() {
	if (speciality != nullptr)
		delete[] speciality;

	Person::Input();

	char log;

	cout << "Введите кол-во специальностей: ";
	cin >> numberOfSpecialties;

	for (int i = 0; i < numberOfSpecialties; i++) {
		cout << i + 1 << ". Введите специальность: " << endl;
		cin >> speciality[i];
	}

	cout << "Введите опыт работы: ";
	cin >> experience;

	do {
		cout << "Вы семейный врач? (y - да, n - нет)\n> ";
		cin >> log;

		if (log == 'y')
			familyDoctor = true;
		else if (log == 'n')
			familyDoctor = false;
		else
			cout << "Вы ввели неверный символ!" << endl << endl;
	} while (log != 'y' && log != 'n');
}
void Doctor::Print() {
	Person::Print();

	cout << "Специальности: " << endl;
	for (int i = 0; i < numberOfSpecialties; i++)
		cout << speciality[i] << endl;
	cout << endl;

	cout << "Стаж работы: " << experience << endl;
	printf("Семейный доктор: %s\n", familyDoctor == true ? "да" : "нет");
}

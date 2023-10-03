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

	cout << "������� ���-�� ��������������: ";
	cin >> numberOfSpecialties;

	for (int i = 0; i < numberOfSpecialties; i++) {
		cout << i + 1 << ". ������� �������������: " << endl;
		cin >> speciality[i];
	}

	cout << "������� ���� ������: ";
	cin >> experience;

	do {
		cout << "�� �������� ����? (y - ��, n - ���)\n> ";
		cin >> log;

		if (log == 'y')
			familyDoctor = true;
		else if (log == 'n')
			familyDoctor = false;
		else
			cout << "�� ����� �������� ������!" << endl << endl;
	} while (log != 'y' && log != 'n');
}
void Doctor::Print() {
	Person::Print();

	cout << "�������������: " << endl;
	for (int i = 0; i < numberOfSpecialties; i++)
		cout << speciality[i] << endl;
	cout << endl;

	cout << "���� ������: " << experience << endl;
	printf("�������� ������: %s\n", familyDoctor == true ? "��" : "���");
}

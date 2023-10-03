#include "Driver.h"

using namespace std;

Driver::Driver(const char* n, int a, string notc, int ps, int pID):Person(n, a) {
	numberOfTheCar = notc;
	passportSeries = ps;
	passportID = pID;
}

void Driver::Input(string notc, int ps, int pID) {
	Person::Input();

	numberOfTheCar = notc;
	passportSeries = ps;
	passportID = pID;

	/*cout << "������� ����� ������: ";
	cin >> numberOfTheCar;

	cout << "������� ����� ���. ����: ";
	cin >> passportSeries;

	cout << "������� ID ���. ����: ";
	cin >> passportID;*/
}
void Driver::Print() {
	Person::Print();

	cout << "����� ������: " << numberOfTheCar << endl;
	cout << "����� ���. ����: " << passportSeries << endl;
	cout << "ID ���. ����: " << passportID << endl;
}

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

	/*cout << "Введите номер машины: ";
	cin >> numberOfTheCar;

	cout << "Введите серию вод. прав: ";
	cin >> passportSeries;

	cout << "Введите ID вод. прав: ";
	cin >> passportID;*/
}
void Driver::Print() {
	Person::Print();

	cout << "Номер машины: " << numberOfTheCar << endl;
	cout << "Серия вод. прав: " << passportSeries << endl;
	cout << "ID вод. прав: " << passportID << endl;
}

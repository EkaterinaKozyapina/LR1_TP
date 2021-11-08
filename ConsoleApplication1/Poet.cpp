#include "Poet.h"

Poet::Poet() : Publication() {
	aliases = 0;

	cout << "\t\tКласс Poet: конструктор без параметров" << endl;
}

Poet::Poet(string fio, int yearOfBird, int yearOfDeath, vector<string> works, int aliases) : Publication(fio, yearOfBird, yearOfDeath, works) {
	setAliases(aliases);

	cout << "\t\tКласс Poet: конструктор с параметрами" << endl;
}

Poet::Poet(const Poet & poet) {
	setFio(poet.fio);
	setYears(poet.yearOfBird, poet.yearOfDeath);
	setWorks(poet.works);
	setAliases(poet.aliases);

	cout << "\t\tКласс Poet: конструктор копирования" << endl;
}

Poet::~Poet() {
	aliases = 0;

	cout << "\t\tКласс Poet: деструктор" << endl;
}

void Poet::setAliases(int aliases) { 
	if (aliases < 0)
		throw exception("Неверное количество псевдонимов");
	this->aliases = aliases; 
}

int Poet::getAliases() { return aliases; }

void Poet::out() {
	cout << "Поэт - ";
	cout << fio << " (" << getYears() << "); " << "псевдонимы: " << aliases << endl;
	cout << "\tОсновные произведения: " << endl;
	for (int i = 0; i < works.size(); i++)
		cout << "\t\t" << i + 1 << ": " << "\"" << works[i] << "\"" << endl;
}
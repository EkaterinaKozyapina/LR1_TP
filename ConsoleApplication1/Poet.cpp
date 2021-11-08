#include "Poet.h"

Poet::Poet() : Publication() {
	aliases = 0;

	cout << "\t\tКласс Poet: конструктор без параметров" << endl;
}

Poet::Poet(string fio, int yearOfBird, int yearOfDeath, vector<string> works, int aliases) : Publication(fio, yearOfBird, yearOfDeath, works) {
	this->aliases = aliases;

	cout << "\t\tКласс Poet: конструктор с параметрами" << endl;
}

Poet::Poet(const Poet & poet) {
	fio = poet.fio;
	yearOfBird = poet.yearOfBird;
	yearOfDeath = poet.yearOfDeath;
	works = poet.works;
	aliases = poet.aliases;

	cout << "\t\tКласс Poet: конструктор копирования" << endl;
}

Poet::~Poet() {
	aliases = 0;

	cout << "\t\tКласс Poet: деструктор" << endl;
}

void Poet::setAliases(int aliases) { this->aliases = aliases; }

int Poet::getAliases() { return aliases; }
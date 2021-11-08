#include "Novelist.h"

Novelist::Novelist() : Publication() {
	biography = "";

	cout << "\t\tКласс Novelist: конструктор без параметров" << endl;
}

Novelist::Novelist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, string biography) : Publication(fio, yearOfBird, yearOfDeath, works) {
	setBiography(biography);

	cout << "\t\tКласс Novelist: конструктор с параметрами" << endl;
}

Novelist::Novelist(const Novelist & novelist) {
	setFio(novelist.fio);
	setYears(novelist.yearOfBird, novelist.yearOfDeath);
	setWorks(novelist.works);
	setBiography(novelist.biography);

	cout << "\t\tКласс Novelist: конструктор копирования" << endl;
}

Novelist::~Novelist() {
	biography = "";

	cout << "\t\tКласс Novelist: деструктор" << endl;
}

void Novelist::setBiography(string biography) { this->biography = biography; }

string Novelist::getBiography() { return biography; }

void Novelist::out() {
	cout << "Романист - ";
	cout << fio << " (" << getYears() << "); " << endl << "\tБиография: " << biography << endl;
	cout << "\tОсновные произведения: " << endl;
	for (int i = 0; i < works.size(); i++)
		cout << "\t\t" << i + 1 << ": " << "\"" << works[i] << "\"" << endl;
}
#include "Novelist.h"

Novelist::Novelist() {
	biography = "";

	cout << "\t\tКласс Novelist: конструктор без параметров" << endl;
}

Novelist::Novelist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, string biography) {
	this->biography = biography;

	cout << "\t\tКласс Novelist: конструктор с параметрами" << endl;
}

Novelist::Novelist(const Novelist & novelist) {
	fio = novelist.fio;
	yearOfBird = novelist.yearOfBird;
	yearOfDeath = novelist.yearOfDeath;
	works = novelist.works;
	biography = novelist.biography;

	cout << "\t\tКласс Novelist: конструктор копирования" << endl;
}

Novelist::~Novelist() {
	biography = "";

	cout << "\t\tКласс Novelist: деструктор" << endl;
}

void Novelist::setBiography(string biography) { this->biography = biography; }

string Novelist::getBiography() { return biography; }
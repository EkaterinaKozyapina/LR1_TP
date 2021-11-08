#include "Fantasist.h"

Fantasist::Fantasist() {
	filmExists = false;

	cout << "\t\t����� Fantasist: ����������� ��� ����������" << endl;
}

Fantasist::Fantasist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, bool filmExists) {
	this->filmExists = filmExists;

	cout << "\t\t����� Fantasist: ����������� � �����������" << endl;
}

Fantasist::Fantasist(const Fantasist & fantasist) {
	fio = fantasist.fio;
	yearOfBird = fantasist.yearOfBird;
	yearOfDeath = fantasist.yearOfDeath;
	works = fantasist.works;
	filmExists = fantasist.filmExists;

	cout << "\t\t����� Fantasist: ����������� �����������" << endl;
}

Fantasist::~Fantasist() {
	filmExists = false;

	cout << "\t\t����� Fantasist: ����������" << endl;
}

void Fantasist::setFilmExists(bool filmExists) { this->filmExists = filmExists; }

bool Fantasist::getFilmExists() { return filmExists; }
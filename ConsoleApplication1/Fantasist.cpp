#include "Fantasist.h"

Fantasist::Fantasist() : Publication() {
	filmExists = false;

	cout << "\t\t����� Fantasist: ����������� ��� ����������" << endl;
}

Fantasist::Fantasist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, bool filmExists) : Publication(fio, yearOfBird, yearOfDeath, works) {
	setFilmExists(filmExists);

	cout << "\t\t����� Fantasist: ����������� � �����������" << endl;
}

Fantasist::Fantasist(const Fantasist & fantasist) {
	setFio(fantasist.fio);
	setYears(fantasist.yearOfBird, fantasist.yearOfDeath);
	setWorks(fantasist.works);
	setFilmExists(fantasist.filmExists);

	cout << "\t\t����� Fantasist: ����������� �����������" << endl;
}

Fantasist::~Fantasist() {
	filmExists = false;

	cout << "\t\t����� Fantasist: ����������" << endl;
}

void Fantasist::setFilmExists(bool filmExists) { this->filmExists = filmExists; }

bool Fantasist::getFilmExists() { return filmExists; }

void Fantasist::out() {
	cout << "������� - ";
	cout << fio << " (" << getYears() << "); " << "����� �� ������: " << ((filmExists)?"��":"���") << endl;
	cout << "\t�������� ������������: " << endl;
	for (int i = 0; i < works.size(); i++)
		cout << "\t\t" << i + 1 << ": " << "\"" << works[i] << "\"" << endl;
}
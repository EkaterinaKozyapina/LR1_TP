#include "Publication.h"


Publication::Publication() {
	fio = "";
	yearOfBird = 0;
	yearOfDeath = 0;

	cout << "\t\t����� Publication: ����������� ��� ����������" << endl;
}

Publication::Publication(string fio, int yearOfBird, int yearOfDeath, vector<string> works) {
	this->fio = fio;
	this->yearOfBird = yearOfBird;
	this->yearOfDeath = yearOfDeath;
	this->works = works;

	cout << "\t\t����� Publication: ����������� � �����������" << endl;
}

Publication::Publication(const Publication & publication) {
	fio = publication.fio;
	yearOfBird = publication.yearOfBird;
	yearOfDeath = publication.yearOfDeath;
	works = publication.works;

	cout << "\t\t����� Publication: ����������� �����������" << endl;
}

Publication::~Publication() {
	fio = "";
	yearOfBird = 0;
	yearOfDeath = 0;
	int cnt = works.size();
	for (int i = 0; i < cnt; i++)
		works.pop_back();

	cout << "\t\t����� Publication: ����������" << endl;
}

void Publication::setFio(string fio) { this->fio = fio; }

string Publication::getFio() { return fio; }

void Publication::setYears(int yearOfBird, int yearOfDeath) {
	this->yearOfBird = yearOfBird;
	this->yearOfDeath = yearOfDeath;
}

string Publication::getYears() { return (to_string(yearOfBird) + "-" + to_string(yearOfDeath)); }

void Publication::setWorks(vector<string> works) { this->works = works; }

vector<string> Publication::getWorks() { return works; }
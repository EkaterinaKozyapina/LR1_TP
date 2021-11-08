#include "Novelist.h"

Novelist::Novelist() {
	biography = "";

	cout << "\t\t����� Novelist: ����������� ��� ����������" << endl;
}

Novelist::Novelist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, string biography) {
	this->biography = biography;

	cout << "\t\t����� Novelist: ����������� � �����������" << endl;
}

Novelist::Novelist(const Novelist & novelist) {
	fio = novelist.fio;
	yearOfBird = novelist.yearOfBird;
	yearOfDeath = novelist.yearOfDeath;
	works = novelist.works;
	biography = novelist.biography;

	cout << "\t\t����� Novelist: ����������� �����������" << endl;
}

Novelist::~Novelist() {
	biography = "";

	cout << "\t\t����� Novelist: ����������" << endl;
}

void Novelist::setBiography(string biography) { this->biography = biography; }

string Novelist::getBiography() { return biography; }
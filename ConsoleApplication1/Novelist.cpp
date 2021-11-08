#include "Novelist.h"

Novelist::Novelist() : Publication() {
	biography = "";

	cout << "\t\t����� Novelist: ����������� ��� ����������" << endl;
}

Novelist::Novelist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, string biography) : Publication(fio, yearOfBird, yearOfDeath, works) {
	setBiography(biography);

	cout << "\t\t����� Novelist: ����������� � �����������" << endl;
}

Novelist::Novelist(const Novelist & novelist) {
	setFio(novelist.fio);
	setYears(novelist.yearOfBird, novelist.yearOfDeath);
	setWorks(novelist.works);
	setBiography(novelist.biography);

	cout << "\t\t����� Novelist: ����������� �����������" << endl;
}

Novelist::~Novelist() {
	biography = "";

	cout << "\t\t����� Novelist: ����������" << endl;
}

void Novelist::setBiography(string biography) { this->biography = biography; }

string Novelist::getBiography() { return biography; }

void Novelist::out() {
	cout << "�������� - ";
	cout << fio << " (" << getYears() << "); " << endl << "\t���������: " << biography << endl;
	cout << "\t�������� ������������: " << endl;
	for (int i = 0; i < works.size(); i++)
		cout << "\t\t" << i + 1 << ": " << "\"" << works[i] << "\"" << endl;
}
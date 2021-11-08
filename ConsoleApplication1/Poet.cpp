#include "Poet.h"

Poet::Poet() : Publication() {
	aliases = 0;

	cout << "\t\t����� Poet: ����������� ��� ����������" << endl;
}

Poet::Poet(string fio, int yearOfBird, int yearOfDeath, vector<string> works, int aliases) : Publication(fio, yearOfBird, yearOfDeath, works) {
	setAliases(aliases);

	cout << "\t\t����� Poet: ����������� � �����������" << endl;
}

Poet::Poet(const Poet & poet) {
	setFio(poet.fio);
	setYears(poet.yearOfBird, poet.yearOfDeath);
	setWorks(poet.works);
	setAliases(poet.aliases);

	cout << "\t\t����� Poet: ����������� �����������" << endl;
}

Poet::~Poet() {
	aliases = 0;

	cout << "\t\t����� Poet: ����������" << endl;
}

void Poet::setAliases(int aliases) { 
	if (aliases < 0)
		throw exception("�������� ���������� �����������");
	this->aliases = aliases; 
}

int Poet::getAliases() { return aliases; }

void Poet::out() {
	cout << "���� - ";
	cout << fio << " (" << getYears() << "); " << "����������: " << aliases << endl;
	cout << "\t�������� ������������: " << endl;
	for (int i = 0; i < works.size(); i++)
		cout << "\t\t" << i + 1 << ": " << "\"" << works[i] << "\"" << endl;
}
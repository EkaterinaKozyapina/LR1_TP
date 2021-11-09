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

void Novelist::change() {
	int choice;
	out();
	cout << "Изменение романиста: " <<
		"\n\t1) ФИО" <<
		"\n\t2) Года" <<
		"\n\t3) Известные работы" <<
		"\n\t4) Биография" << endl << "Пункт для изменение: ";
	cin >> choice;
	if (choice >= 1 && choice <= 3)
		changeBase(choice);
	else if (choice == 4)
	{
		string buf;
		cout << "Введите новую биографию: ";
		cin >> buf;
		setBiography(buf);
	}
	else
		throw exception("Неверный пункт при изменении романиста");
}
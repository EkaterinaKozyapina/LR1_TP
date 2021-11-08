﻿#pragma once
#include "Publication.h"

class Novelist : public Publication
{
public:

	// Конструктор без параметров
	Novelist();

	// Конструктор с параметрами (ФИО, года рождения и смерти, некоротые работы, краткая биография)
	Novelist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, string biography);

	// Конструктор копирования
	Novelist(const Novelist & novelist);

	// Деструктор
	~Novelist();

	// Установление краткой биографии
	void setBiography(string biography);

	// Извлечение краткой биографии
	string getBiography();

	// Вывод в консоль
	void out();

private:

	string biography;				// Краткая биография
};
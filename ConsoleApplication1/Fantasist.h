#pragma once
#include "Publication.h"

class Fantasist : public Publication
{
public:
	// ����������� ��� ����������
	Fantasist();

	// ����������� � ����������� (���, ���� �������� � ������, ��������� ������, ����� �� ������)
	Fantasist(string fio, int yearOfBird, int yearOfDeath, vector<string> works, bool filmExists);

	// ����������� �����������
	Fantasist(const Fantasist & fantasist);

	// ����������
	~Fantasist();

	// ������������ ������� ���������
	void setFilmExists(bool filmExists);

	// ���������� ������� ���������
	bool getFilmExists();

private:

	bool filmExists;			// ����� �� ������ �� ������
};
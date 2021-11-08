#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;


class Publication
{
public:

	// ����������� ��� ����������
	Publication();

	// ����������� � ����������� (���, ���� �������� � ������, ��������� ������)
	Publication(string fio, int yearOfBird, int yearOfDeath, vector<string> works);

	// ����������� �����������
	Publication(const Publication & publication);

	// ����������
	virtual ~Publication();

	// ������������ ���
	void setFio(string fio);

	// ���������� ���
	string getFio();

	// ������������ ���� �������� � ���� ������
	void setYears(int yearOfBird, int yearOfDeath);

	// ���������� ���� �������� � ���� ������
	string getYears();

	// ������������ �������� �����
	void setWorks(vector<string> works);

	// ���������� �������� �����
	vector<string> getWorks();

protected:

	string fio;						// ���
	int yearOfBird;					// ��� ��������
	int yearOfDeath;				// ��� ������
	vector<string> works;			// �������� ������������
};

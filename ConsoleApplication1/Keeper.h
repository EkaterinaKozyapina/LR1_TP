#pragma once
#include "Publication.h"

class Keeper
{
public:

	// ����������� ��� ����������
	Keeper();

	// ����������� � ����������� (������ ����������)
	Keeper(int size);

	// ����������� �����������
	Keeper(const Keeper & keeper);

	// ����������
	~Keeper();

	// ���������� ���������� � ����
	void saveToFile();

	// ������� ��������� �� �����
	void extractFromFile();

	// ����� ���������� �� ����� (���������� ��������� ������ <<)
	friend std::ostream& operator<< (std::ostream &out, const Keeper & keeper);

	// ���������� �������� � ����� ����������
	void addObject(Publication & publication);

	// �������� �������� � ����� ����������
	void removeObject();

private:

	int size;						// ������ ����������
	int index;						// ���������� ��������� � ����������
	Publication ** conteiner;		// ��������� (������ ���������� �� ������� �����)
};
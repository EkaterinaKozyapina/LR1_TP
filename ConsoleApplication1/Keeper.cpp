#include "Keeper.h"

Keeper::Keeper() {
	size = 0;
	index = 0;
	conteiner = nullptr;

	cout << "\t\tКласс Keeper: конструктор без параметров" << endl;
}

Keeper::Keeper(int size) {
	if (size <= 0)
		throw exception("Количество элементов контейнера не верно");
	this->size = size;
	conteiner = new Publication*[size];
	index = 0;

	cout << "\t\tКласс Keeper: конструктор с параметрами" << endl;
}

Keeper::Keeper(const Keeper & keeper) {
	size = keeper.size;
	for (int i = 0; i < keeper.index; i++)
		addObject(*keeper.conteiner[i]);

	cout << "\t\tКласс Keeper: конструктор копирования" << endl;
}

Keeper::~Keeper() {
	int cnt = index;
	for (int i = 0; i < cnt; i++)
		removeObject();
	size = 0;
	index = 0;
	conteiner = nullptr;

	cout << "\t\tКласс Keeper: деструктор" << endl;
}

void Keeper::saveToFile() {

}

void Keeper::extractFromFile() {

}

std::ostream& operator<< (std::ostream &out, const Keeper & keeper)
{
	if (keeper.index == 0)
		out << "Контейнер пуст" << endl;
	else
		for (int i = 0; i < keeper.index; i++)
		{
			out << i + 1 << " ";
			cout << keeper.conteiner[i]->out();
		}

	return out;
}

void Keeper::addObject(Publication & publication) {
	if (index == size)
		throw exception("Контейнер заполнен, добавление объекта невозможно");
	conteiner[index] = &publication;
	index++;
	cout << "Элемент добавлен в контейнер" << endl;
}

void Keeper::removeObject() {
	if (index == 0)
		throw exception("Контейнер пуст, удаление объекта невозможно");
	delete(conteiner[index - 1]);
	index--;
	cout << "Элемент удален из контейнера" << endl;
}

void Keeper::change(int index) {
	if (index < 0 || index > this->index)
		throw exception("Неверный индекс при изменении");
	conteiner[index]->change();
}
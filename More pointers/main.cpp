#include <iostream>
	//Кодировка UTF-8
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	
	// Направление указателя на нейтральный адрес
	int *pointer;

	// 1-ый способ
	pointer = 0;// нейтральный адрес
	if (pointer)
		std::cout << pointer << std::endl;
	else
		std::cout << "Указатель не инициализирован.\n";
	// *pointer = 15; ОШИБКА, т.к. в нейтральной памяти нельзя записывать данные.

	// 2-й способ
	pointer = NULL; // нейтральный адрес
	if (pointer != NULL)
		std::cout << pointer << std::endl;
	else
		std::cout << "Указатель не инициализирован.\n";

	// 3-й способ - правильный
	pointer = nullptr;
	if (pointer != nullptr)
		std::cout << pointer << std::endl;
	else
		std::cout << "Указатель не инициализирован.\n";


	return 0;
}
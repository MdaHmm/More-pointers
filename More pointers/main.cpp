﻿#include <iostream>
	//Кодировка UTF-8
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	
	// Направление указателя на нейтральный адрес
	/*
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
		*/

	// Модификации указателей
	
	n = 15;

	// """Указатель на константу""" может быть перенаправлен на другие области памяти.
	// С его помощью НЕВОЗМОЖНО поменять значение переменной, на которую он направлен.
	const int *pn1;  
	pn1 = &n;
	// *pn1 = 1;  ОШИБКА
	n = 1;
	std::cout << *pn1 << std::endl;

	// """Константный указатель или указатель-константа.""" не может быть перенаправлен на другую область памяти и должен быть инициализирован сразу в момент создания.
	// С его помощью можно менять значение переменной, на которую он направлен.
	int* const pn2 = &n; 
	// pn2 = &m; // ОШИБКА
	*pn2 = 20;
	std::cout << n << std::endl;

	// """Константный указатель на константу""" не может быть перенаправлен на другую область памяти и должен быть инициализирован сразу в момент создания.
	// С его помощью НЕВОЗМОЖНО поменять значение переменной, на которую он направлен.
	const int* const pn3 = &n;
	// pn3 = &m; ОШИБКА
	// pn3 = 12; ОШИБКА
	std::cout << *pn3 << std::endl;
	




	return 0;
}
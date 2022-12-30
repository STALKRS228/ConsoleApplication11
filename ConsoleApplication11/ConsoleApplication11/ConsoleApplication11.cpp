﻿#include <iostream>

// str указывает на первый символ строки C-style.
// Обратите внимание, str указывает на const char и мы не можем изменить это значение.
// Однако, мы можем заставить str указывать на что-либо другое. Это не приведет к изменению значения исходного аргумента
void printCString(const char* str)
{
	// Пока мы не встретили нуль-терминатор
	while (*str != '\0')
	{
		// Выводим текущий символ
		std::cout << *str;

		// И переводим указатель str на следующий символ
		++str;
	}
}

int main()
{
	printCString("Hello, world!");

	return 0;
}
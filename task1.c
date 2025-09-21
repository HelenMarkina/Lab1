#include <locale.h>
#include <stdio.h>

void main()

{
	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки

	puts("Добрый день, Елена!"); // вывод строки

	return 20;

	getchar(); // задержка экрана
}
#include <locale.h>
#include <stdio.h>

void main()

{
	setlocale(LC_ALL, "RUS"); // ��� ������������ ������� ���������

	puts("������ ����, �����!"); // ����� ������

	return 20;

	getchar(); // �������� ������
}
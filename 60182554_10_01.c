#include<stdio.h>
#include<windows.h>

void even() {
	printf("1818 \n");
}

void odd() {
	printf("9797 \n");
}

void main() {
	int number;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		even();

	else
		odd();

	system("pause");
}
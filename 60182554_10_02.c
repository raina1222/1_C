#include<stdio.h>
#include<windows.h>

void star(int i) {
	int j;
	for (j = 1; j <= i; j++)
		printf("*");
	printf("\n");
}

void main() {
	int number;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	star(number);

	system("pause");
}
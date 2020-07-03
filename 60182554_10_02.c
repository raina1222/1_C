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
	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	star(number);

	system("pause");
}
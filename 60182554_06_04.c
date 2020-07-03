#include <stdio.h>
#include <windows.h>

void main() {
	int number;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	if (number % 5 == 0)
		printf("5의 배수입니다.\n");

	system("pause");
}
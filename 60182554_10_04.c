#include<stdio.h>
#include<windows.h>

void numberDecision(int i) {
	if (i > 0)
		printf("양수 입력! \n");

	else if (i < 0)
		printf("음수 입력!\n");

	else
		printf("0입력! \n");
}

void main() {
	int number;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	numberDecision(number);

	system("pause");
}
#include<stdio.h>
#include<windows.h>

void main() {
	int number, compOnTWO;

	printf("정수를 입력하시오:");
	scanf_s("%d", &number);

	compOnTWO = ~number + 1;

	printf("2의 보수는 %d 입니다\n", compOnTWO);

	system("pause");
}
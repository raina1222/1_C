#include<stdio.h>
#include<windows.h>

void main() {
	int number, i, sum;
	sum = 0;

	printf("양의 정수를 1개 입력하시오: ");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
		sum = sum + i;
	printf("1부터 사용자가 입력한 정수까지의 합: %d\n", sum);

	system("pause");
}
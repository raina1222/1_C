#include<stdio.h>
#include<windows.h>

void main(){
	int number, even, odd, i;
	even = 0;
	odd = 0;

	printf("양의 정수를 한개 입력하시오: ");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
		if (i % 2 == 1)
			odd = odd + i;

		else
			even = even + i;

	printf("홀수의 합: %d \n 짝수의 합: %d\n", odd, even);

	system("pause");
}
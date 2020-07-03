#include<stdio.h>
#include<windows.h>

void main() {
	int num1, num2, num3, result;

	printf("정수 세 개를 입력하시오: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 | (num2 & num3);

	printf("연산 결과는 %d 이다.\n", result);
	
	system("pause");
}
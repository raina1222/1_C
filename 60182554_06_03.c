#include <stdio.h>
#include <windows.h>

void main() {
	double height, weight, stdweight;

	printf("당신의 키와 몸무게를 입력하시오: ");
	scanf_s("%lf %lf", &height, &weight);

	stdweight = (height - 100) * 0.9;

	if (weight >= stdweight - 3 && weight <= stdweight + 3) 
		printf("표준체중입니다.\n");

	else if (weight < stdweight - 3)
	printf("저체중 입니다.\n");

	else
	printf("과체중 입니다.\n");

	system("pause");
}
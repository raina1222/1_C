#include<stdio.h>
#include<windows.h>

void main() {
	double height, weight, stdweight, difweight;

	printf("당신의 키와 몸무게를 입력하시오: ");
	scanf_s("%lf %lf", &height, &weight);

	stdweight = (height - 100) * 0.9;
	difweight = weight - stdweight;

	printf("당신의 몸무게와 표준 몸무게의 차이: %lf\n", difweight);

	system("pause");
}
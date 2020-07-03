#include<stdio.h>
#include<windows.h>

double avg(double a, double b, double c) {
	double aver;
	aver = (a + b + c) / 3;
	return aver;
}

void main() {
	double x, y, z, result;
	printf("숫자 세개를 입력하시오: ");
	scanf_s("%lf %lf %lf", &x, &y, &z);

	result = avg(x, y, z);
	printf("평균: %lf \n", result);

	system("pause");
}
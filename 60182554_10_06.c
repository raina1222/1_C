#include<stdio.h>
#include<windows.h>

double susik(double a, double b) {
	double  y;
	y = (a * a * a + 7 * b * b) / 3;

	return y;
}

void main() {
	double num1, num2, res;

	printf("실수 두개를 입력하시오: ");
	scanf_s("%lf %lf", &num1, &num2);

	res = susik(num1, num2);
	printf("계산 결과: %lf \n", res);

	system("pause");
}
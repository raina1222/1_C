#include<stdio.h>
#include<windows.h>
#include<math.h>

void suhak(double x, double y) {

	printf("x의 y제곱: %lf \n", pow (x, y));
	printf("루트 x: %lf \n", sqrt(x));
	printf("루트 y: %lf \n", sqrt(y));
	}
void main() {
	double num1, num2;

	printf("실수 x와 y를 입력하시오: ");
	scanf_s("%lf %lf", &num1, &num2);

	suhak(num1, num2);

	system("pause");
}
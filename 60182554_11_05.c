#include<stdio.h>
#include<windows.h>
#include<math.h>

void suhak(double x, double y) {

	printf("x�� y����: %lf \n", pow (x, y));
	printf("��Ʈ x: %lf \n", sqrt(x));
	printf("��Ʈ y: %lf \n", sqrt(y));
	}
void main() {
	double num1, num2;

	printf("�Ǽ� x�� y�� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &num1, &num2);

	suhak(num1, num2);

	system("pause");
}
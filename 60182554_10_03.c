#include<stdio.h>
#include<windows.h>

double avg(double a, double b, double c) {
	double aver;
	aver = (a + b + c) / 3;
	return aver;
}

void main() {
	double x, y, z, result;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%lf %lf %lf", &x, &y, &z);

	result = avg(x, y, z);
	printf("���: %lf \n", result);

	system("pause");
}
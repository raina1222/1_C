#include<stdio.h>
#include<windows.h>

void main() {
	double height, weight, stdweight, difweight;

	printf("����� Ű�� �����Ը� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &height, &weight);

	stdweight = (height - 100) * 0.9;
	difweight = weight - stdweight;

	printf("����� �����Կ� ǥ�� �������� ����: %lf\n", difweight);

	system("pause");
}
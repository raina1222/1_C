#include <stdio.h>
#include <windows.h>

void main() {
	double height, weight, stdweight;

	printf("����� Ű�� �����Ը� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &height, &weight);

	stdweight = (height - 100) * 0.9;

	if (weight >= stdweight - 3 && weight <= stdweight + 3) 
		printf("ǥ��ü���Դϴ�.\n");

	else if (weight < stdweight - 3)
	printf("��ü�� �Դϴ�.\n");

	else
	printf("��ü�� �Դϴ�.\n");

	system("pause");
}
#include <stdio.h>
#include <windows.h>
#define pi 3.14

void main() {
	double radious, area;

	printf("�������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radious);

	area = 4 * pi * radious * radious;
	printf("���� ǥ������ %lf �Դϴ�.\n", area);

	system("pause");
}
#include <stdio.h>
#include <windows.h>
#define pi 3.14

void main() {
	double radious, area;

	printf("반지름을 입력하시오: ");
	scanf_s("%lf", &radious);

	area = 4 * pi * radious * radious;
	printf("구의 표면적은 %lf 입니다.\n", area);

	system("pause");
}
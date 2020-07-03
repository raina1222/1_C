#include <stdio.h>
#include <windows.h>

void main() {
	double fahr, cels;

	printf("화씨 온도를 입력하시오: ");
	scanf_s("%lf", &fahr);

	cels = 5.0 / 9 * (fahr - 32);
	printf("섭씨 온도 %lf 입니다.\n", cels);

	system("pause");
}
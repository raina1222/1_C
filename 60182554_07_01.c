#include<stdio.h>
#include<windows.h>

void main() {
	int x, y;

	printf("x와 y 좌표 값을 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	if (x >= 0 && y >= 0)
		printf("1사분면 입니다!\n");

	else if (x <= 0 && y >= 0)
		printf("2사분면 입니다!\n");

	else if (x >= 0 && y <= 0)
		printf("3사분면 입니다!\n");

	else
		printf("4사분면 입니다!\n");

	system("pause");
}
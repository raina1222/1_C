#include<stdio.h>
#include<windows.h>

void main() {
	int x, y;

	printf("x�� y ��ǥ ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	if (x >= 0 && y >= 0)
		printf("1��и� �Դϴ�!\n");

	else if (x <= 0 && y >= 0)
		printf("2��и� �Դϴ�!\n");

	else if (x >= 0 && y <= 0)
		printf("3��и� �Դϴ�!\n");

	else
		printf("4��и� �Դϴ�!\n");

	system("pause");
}
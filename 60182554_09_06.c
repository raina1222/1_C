#include <stdio.h>
#include <windows.h>

void main() {
	int x, y;

	do {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &x);

		y = 4 * x * x + 2 * x;

		printf("y���� %d \n", y);
	} while (y != 0);
	system("pause");
}
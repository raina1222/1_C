#include <stdio.h>
#include <windows.h>

void main() {
	int x, y;

	do {
		printf("정수를 입력하시오: ");
		scanf_s("%d", &x);

		y = 4 * x * x + 2 * x;

		printf("y값은 %d \n", y);
	} while (y != 0);
	system("pause");
}
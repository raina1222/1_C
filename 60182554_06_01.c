#include <stdio.h>
#include <windows.h>

void main() {
	int number;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	if (number < 0)
		number = number * -1;

	printf("입력한 절대값은 %d이다.\n", number);

	system("pause");
}
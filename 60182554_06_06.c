#include <stdio.h>
#include <windows.h>

void main() {
	int x, result;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	if (x < 0)
		result = x * x * x + 2 * x + 9;

	else if (x > 0)
		result = 7 * x + 2;

	else
		result = 0;

	printf("계산결과: %d\n", result);

	system("pause");
}
#include <stdio.h>
#include <windows.h>

void main() {
	int x, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	if (x < 0)
		result = x * x * x + 2 * x + 9;

	else if (x > 0)
		result = 7 * x + 2;

	else
		result = 0;

	printf("�����: %d\n", result);

	system("pause");
}
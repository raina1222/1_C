#include <stdio.h>
#include <windows.h>

void main() {
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	if (number % 5 == 0)
		printf("5�� ����Դϴ�.\n");

	system("pause");
}
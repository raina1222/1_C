#include <stdio.h>
#include <windows.h>

void main() {
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	if (number < 0)
		number = number * -1;

	printf("�Է��� ���밪�� %d�̴�.\n", number);

	system("pause");
}
#include <stdio.h>
#include <windows.h>

void main() {
	int number, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	result = (number >= 80) && (number < 90);

	printf("�Է��� ���� %d�� �� ������: %d\n", number, result);

	system("pause");
}
#include <stdio.h>
#include <windows.h>

void main() {
	int a, b, number;
	number = 1;

	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	while (number <= 100) {
		if (number % a == 0 && number % b != 0)
			printf("ù ��° ���� ������� �� ��° ���� ����� �ƴ� ����: %d \n", number);

		number++;
	}
	system("pause");
}
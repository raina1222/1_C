#include<stdio.h>
#include<windows.h>

void main() {
	int num1, num2, num3, result;

	printf("���� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 | (num2 & num3);

	printf("���� ����� %d �̴�.\n", result);
	
	system("pause");
}
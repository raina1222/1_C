#include <stdio.h>
#include <windows.h>

void main() {
	double num1, num2, result;
	printf("�Ǽ� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &num1, &num2);

	result = num1 + num2;
	printf("���� ���: %lf \n", result);

	result = num1 - num2;
	printf("���� ���: %lf \n", result);

	result = num1 * num2;
	printf("���� ���: %lf \n", result);

	result = num1 / num2;
	printf("������ ���: %lf \n", result);
	system("pause");
}
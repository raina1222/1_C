#include <stdio.h>
#include <windows.h>

void main() {
	double num1, num2, result;
	char op;

	printf("<�ǿ�����1 ������ �ǿ�����2> ������ ������ �Է��Ͻÿ�: ");
	scanf_s("%lf %c %lf", &num1, &op, 1, &num2);

	switch (op) {
	case '+': result = num1 + num2;
		printf("���� ���: %lf \n", result); break;

	case '-': result = num1 - num2;
		printf("���� ��� : %lf \n", result); break;

	case '*': result = num1 * num2;
		printf("���� ���: %lf \n", result); break;

	case '/': result = num1 / num2;
		printf("���� ��� : %lf \n", result); break;

	default: printf("ó���� �� ���� �����ڰ� �ԷµǾ����ϴ�.\n");
		printf("���� ����� �����ϴ�.\n");
	}
	system("pause");
}
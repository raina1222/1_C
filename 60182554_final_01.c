#include <stdio.h>
#include <windows.h>

void main() {
	char name[50];
	int a, b, c;
	double sum;

	printf("�̸��� �Է��Ͻÿ�: ");
	gets(name);

	printf("��ȭ�� ������� �Է��Ͻÿ�: ");
	scanf_s("%d", &a);

	printf("���� ������� �Է��Ͻÿ�: ");
	scanf_s("%d", &b);

	printf("������ ������� �Է��Ͻÿ�: ");
	scanf_s("%d", &c);

	sum = a + b + c;
	printf("�� �̿� ���: %lf \n", sum);

	if (sum >= 100000)
		sum = sum - sum * 0.1;
	printf("%s�� �� ���� �ݾ�: %lf \n", name, sum);

	system("pause");
}
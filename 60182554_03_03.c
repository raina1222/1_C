#include <stdio.h>
#include <windows.h>
void main() {
	char name;
	int age;
	double weight;
	printf("��� �̸��� ���� �̴ϼ��� �Է��Ͻÿ�: ");
	scanf_s("%c", &name, 1);
	printf("����� ���̿� �����Ը� �Է��Ͻÿ�: ");
	scanf_s("%d %lf", &age, &weight);
	printf("�̸��� ���� �̴ϼ��� %c, ���̴�%d, �����Դ� %lf�Դϴ�.\n", name, age, weight);
	system("pause");
}
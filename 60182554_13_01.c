#include<stdio.h>
#include<windows.h>

void main() {
	char name[50];
	char major[50];
	int stNumber;

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", name, 49);
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%s", major, 49);
	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &stNumber);

	printf("����� �̸�: %s \n", name);
	printf("����� ����: %s \n", major);
	printf("����� �й�: %d \n", stNumber);

	system("pause");
}
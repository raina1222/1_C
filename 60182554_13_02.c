#include<stdio.h>
#include<windows.h>

void main() {
	char name[50], major[50];
	int stNumber;

	printf("�̸��� �Է��Ͻÿ�: ");
	gets(name);
	printf("������ �Է��Ͻÿ�: ");
	gets_s(major, 49);
	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &stNumber);

	printf("����� �̸�: ");
	puts(name);
	printf("����� ����: ");
	puts(major);
	printf("����� �й�: %d \n", stNumber);

	system("pause");
}
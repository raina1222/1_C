#include<stdio.h>
#include<windows.h>

void main() {
	int number, compOnTWO;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &number);

	compOnTWO = ~number + 1;

	printf("2�� ������ %d �Դϴ�\n", compOnTWO);

	system("pause");
}
#include<stdio.h>
#include<windows.h>

void numberDecision(int i) {
	if (i > 0)
		printf("��� �Է�! \n");

	else if (i < 0)
		printf("���� �Է�!\n");

	else
		printf("0�Է�! \n");
}

void main() {
	int number;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	numberDecision(number);

	system("pause");
}
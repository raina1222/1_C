#include<stdio.h>
#include<windows.h>

void main() {
	int number, i, sum;
	sum = 0;

	printf("���� ������ 1�� �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
		sum = sum + i;
	printf("1���� ����ڰ� �Է��� ���������� ��: %d\n", sum);

	system("pause");
}
#include<stdio.h>
#include<windows.h>

void main() {
	int i, sum;
	sum = 0;

	for (i = 1; i <= 100; i++)
		if (i % 3 == 0)
			sum = sum + i;

	printf("1~100������ ������ 3�� ����� ��: %d\n", sum);

	system("pause");
}
#include<stdio.h>
#include<windows.h>

void main(){
	int number, even, odd, i;
	even = 0;
	odd = 0;

	printf("���� ������ �Ѱ� �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
		if (i % 2 == 1)
			odd = odd + i;

		else
			even = even + i;

	printf("Ȧ���� ��: %d \n ¦���� ��: %d\n", odd, even);

	system("pause");
}
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int dice;

	srand((unsigned)time(NULL));
	dice = (rand() % 11) + 2;

	printf("�� ���� �ֻ����� ��: %d \n", dice);
	system("pause");
}
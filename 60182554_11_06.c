#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int number, rn;

	printf("5 ������ ����� �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	srand((unsigned)time(NULL));
	rn = (rand() % 5) + 1;

	if (number > rn)
		printf("big \n");
	else if (number < rn)
		printf("small \n");
	else
		printf("equal \n");


	system("pause");
}
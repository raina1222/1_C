#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

void main() {
	int number;

	srand((unsigned)time(NULL));
	number = (rand() % 100) + 1;

	if(number <= 5)
		printf("1�� ��ǰ�� ��÷ �Ǽ̽��ϴ�! \n");
	else if(number > 5 && number <= 20)
		printf("2�� ��ǰ�� ��÷ �Ǽ̽��ϴ�! \n");
	else if(number >20 && number <= 50)
		printf("3�� ��ǰ�� ��÷ �Ǽ̽��ϴ�! \n");
	else
		printf("4�� ��ǰ�� ��÷ �Ǽ̽��ϴ�! \n");
	system("pause");
}
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int dice;

	srand((unsigned)time(NULL));
	dice = (rand() % 11) + 2;

	printf("두 개의 주사위의 합: %d \n", dice);
	system("pause");
}
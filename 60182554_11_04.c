#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int rotto, i;

	srand((unsigned)time(NULL));

	for (i = 1; i <= 6; i++) {
		rotto = (rand() % 45) + 1;
		printf("%d��° �ζ� ��ȣ: %d \n", i, rotto);
	}
	system("pause");
}
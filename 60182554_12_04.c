#include<stdio.h>
#include<windows.h>

void main() {
	int days[5] = { 31, 28, 31, 30, 31 };
	int i;

	for (i = 0; i < 5; i++)
		printf("%d월달의 일수; %d \n", i + 1, days[i]);

	system("pause");
}
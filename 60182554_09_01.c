#include <stdio.h>
#include <windows.h>

void main() {
	int number = 1;

	while (number <= 20) {
		if (number % 2 == 1)
			printf("1~20������ Ȧ��: %d \n", number);
		number++;
	}

	system("pause");
}
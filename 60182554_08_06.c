#include<stdio.h>
#include<windows.h>

void main() {
	int i, j;

	for (i = 1; i <= 10; i += 3) {

		for (j = 1; j <= 9; j++) {
			printf("%d * %d = %d \n", i, j, i * j);

		}

	}
	system("pause");
}
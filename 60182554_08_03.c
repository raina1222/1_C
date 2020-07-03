#include<stdio.h>
#include<windows.h>

void main() {
	int i, j, fac;
	fac = 1;
	
	for (i = 2; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			fac = fac * j;
		}
			printf("%dÀÇ °á°ú: %d\n", i, fac);
			fac = 1;
	}

	system("pause");
}
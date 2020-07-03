#include<stdio.h>
#include<windows.h>

void main() {
	double real[4];
	int i;

	for (i = 0; i < 4; i++) {
		printf("%d번째 실수를 입력하시오: ", i + 1);
		scanf_s("%lf", &real[i]);
	
	}

	for (i = 0; i < 4; i++)
		printf("%d번째 입력된 실수: %lf \n", i + 1, real[i]);

	system("pause");
}
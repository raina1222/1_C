#include<stdio.h>
#include<windows.h>

void main() {
	double real[3] = {10.5, 20.5, 30.5};
	int i;

	for (i = 0; i < 3; i++)
		printf("%d��° �迭�� ����� ��: %lf \n", i + 1, real[i]);

	system("pause");
}
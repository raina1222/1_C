#include<stdio.h>
#include<windows.h>

void main() {
	double real[4];
	int i;

	for (i = 0; i < 4; i++) {
		printf("%d��° �Ǽ��� �Է��Ͻÿ�: ", i + 1);
		scanf_s("%lf", &real[i]);
	
	}

	for (i = 0; i < 4; i++)
		printf("%d��° �Էµ� �Ǽ�: %lf \n", i + 1, real[i]);

	system("pause");
}
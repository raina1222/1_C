#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

void main() {
	int A[7], B[7], i, s;
	double a = 0, b = 0, c = 0, d, e, f;

	srand((unsigned)time(NULL));

	for (i = 0; i < 7; i++) {
		A[i] = (rand() % 100) + 1;
		B[i] = (rand() % 100) + 1;
	}
	for (i = 0; i < 7; i++) {
		printf("�迭A�� %d��° ��: %d \n", i + 1, A[i]);
		printf("�迭B�� %d��° ��: %d \n", i + 1, B[i]);
	}
	printf("���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &s);

	for (i = 0; i < 7; i++) {
		if (A[i] > s)
			a++;
	}
	for (i = 0; i < 7; i++) {
		if (B[i] > s)
			b++;
	}
	for (i = 0; i < 7; i++) {
		if ((A[i] > s) && (B[i] > s))
			c++;
	}
	printf("A�迭�� ���� ���� ���� ���� Ȯ��: %lf \n", a / 7.0);
	printf("B�迭�� ���� ���� ���� ���� Ȯ��: %lf \n", b / 7.0);
	printf("B�迭�� ���� ���� ���� ���� �� A�迭�� ���� ���� ���� ���� Ȯ��: %lf", c / b);

	system("pause");
}
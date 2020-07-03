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
		printf("배열A의 %d번째 값: %d \n", i + 1, A[i]);
		printf("배열B의 %d번째 값: %d \n", i + 1, B[i]);
	}
	printf("기준 값을 입력하시오: ");
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
	printf("A배열의 값이 기준 값을 넘을 확율: %lf \n", a / 7.0);
	printf("B배열의 값이 기준 값을 넘을 확율: %lf \n", b / 7.0);
	printf("B배열의 값이 기준 값을 넘을 때 A배열의 값이 기준 값을 넘을 확율: %lf", c / b);

	system("pause");
}
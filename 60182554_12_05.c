#include<stdio.h>
#include<windows.h>

void main() {
	int num[6], i;

	for (i = 0; i < 6; i++) {
		printf("%d번째 정수를 입력하시오: ", i + 1);
		scanf_s("%d", &num[i]);
	}
	for (i = 0; i < 6; i += 2)
			printf("%d번째 입력된 수: %d \n", i + 1, num[i]);

	system("pause");
}
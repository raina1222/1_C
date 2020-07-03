#include <stdio.h>
#include <windows.h>

void main() {
	int a, b, number;
	number = 1;

	printf("정수 두개를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	while (number <= 100) {
		if (number % a == 0 && number % b != 0)
			printf("첫 번째 수의 배수지만 두 번째 수의 배수가 아닌 정수: %d \n", number);

		number++;
	}
	system("pause");
}
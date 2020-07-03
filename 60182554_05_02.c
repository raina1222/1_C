#include <stdio.h>
#include <windows.h>

void main() {
	int number, result;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	result = (number >= 80) && (number < 90);

	printf("입력한 정수 %d의 논리 연산결과: %d\n", number, result);

	system("pause");
}
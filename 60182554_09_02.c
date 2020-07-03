#include <stdio.h>
#include <windows.h>

void main() {
	int a, b, sum, number;
	sum = 0;
	number = 1;

	printf("정수 2개를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	while (number <= 500) {
		if (number % a == 0 && number % b == 0)
			sum += number;
	
		number++;
	}
	printf("1~500사이의 정수 중 입력한 두수의 배수들의 총합: %d \n", sum);
	
	system("pause");
}
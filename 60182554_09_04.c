#include <stdio.h>
#include <windows.h>

void main() {
	int sum, number;
	sum = 0;
	number = 1;

	while (number <= 20) {
		if (number % 2 == 0)
			sum += number;
		number++;
	}
	printf("1~20±îÁö Á¤¼ö Áß Â¦¼öÀÇ ÃÑÇÕ: %d \n", sum);

	system("pause");
}
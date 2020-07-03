#include <stdio.h>
#include <windows.h>

void main() {
	double height;
	int age;

	printf("당신의 키와 나이를 입력하시오: ");
	scanf_s("%lf %d", &height, &age);

	if (height >= 120 && age >= 5) {
		printf("승선 가능합니다!\n");
		printf("좋은 시간 되세요~~\n");
	}
	else {
		printf("승선 불가합니다!\n");
		printf("다음 기회에...\n");
	}
	system("pause");
}
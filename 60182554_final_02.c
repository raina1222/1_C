#include <stdio.h>
#include <windows.h>

void func01(int a, int b) {
	int res;
	res = a * a + b * b;
	printf("%d \n", res);

}
void func02(int a, int b) {
	int i, j;
	for (j = 1; j <= a; j++) {

		for (i = 1; i <= b; i++) {
			printf("*");
		}
		printf("\n");
	}
}
	

void main() {
	int num1, num2;
	printf("정수 2개를 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);

	printf("첫 번째 함수 수행 결과:");
	func01(num1, num2);
	printf("두 번째 함수 수행 결과: \n");
	func02(num1, num2);

	system("pause");
}
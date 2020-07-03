#include <stdio.h>
#include <windows.h>

void main() {
	char name[50];
	int a, b, c;
	double sum;

	printf("이름을 입력하시오: ");
	gets(name);

	printf("백화점 결재액을 입력하시오: ");
	scanf_s("%d", &a);

	printf("극장 결재액을 입력하시오: ");
	scanf_s("%d", &b);

	printf("음식점 결재액을 입력하시오: ");
	scanf_s("%d", &c);

	sum = a + b + c;
	printf("총 이용 요금: %lf \n", sum);

	if (sum >= 100000)
		sum = sum - sum * 0.1;
	printf("%s의 총 결제 금액: %lf \n", name, sum);

	system("pause");
}
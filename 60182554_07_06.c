#include <stdio.h>
#include <windows.h>

void main() {
	double num1, num2, result;
	char op;

	printf("<피연산자1 연산자 피연산자2> 순으로 수식을 입력하시오: ");
	scanf_s("%lf %c %lf", &num1, &op, 1, &num2);

	switch (op) {
	case '+': result = num1 + num2;
		printf("연산 결과: %lf \n", result); break;

	case '-': result = num1 - num2;
		printf("연산 결과 : %lf \n", result); break;

	case '*': result = num1 * num2;
		printf("연산 결과: %lf \n", result); break;

	case '/': result = num1 / num2;
		printf("연산 결과 : %lf \n", result); break;

	default: printf("처리할 수 없는 연산자가 입력되었습니다.\n");
		printf("연산 결과가 없습니다.\n");
	}
	system("pause");
}
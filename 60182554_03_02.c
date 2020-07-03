#include <stdio.h>
#include <windows.h>
void main() {
	char alpha;
	printf("문자를 입력하시오: ");
	scanf_s("%c" , &alpha, 1);
	printf("입력된 문자는 %c 입니다.\n", alpha);
	system("pause");
}
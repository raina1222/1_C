#include <stdio.h>
#include <windows.h>
void main() {
	int broAge;
	int myAge;
	printf("당신의 형(또는 동생)과 본인의 나이를 입력하시오: ");
	scanf_s("%d %d", &broAge, &myAge);
	printf("당신 형(또는 동생)의 나이 %d , 당신의 나이는 %d입니다.\n", broAge, myAge);
	system("pause");
}
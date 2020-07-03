#include<stdio.h>
#include<windows.h>

void main() {
	char name[50], major[50];
	int stNumber;

	printf("이름을 입력하시오: ");
	gets(name);
	printf("전공을 입력하시오: ");
	gets_s(major, 49);
	printf("학번을 입력하시오: ");
	scanf_s("%d", &stNumber);

	printf("당신의 이름: ");
	puts(name);
	printf("당신의 전공: ");
	puts(major);
	printf("당신의 학번: %d \n", stNumber);

	system("pause");
}
#include<stdio.h>
#include<windows.h>

void main() {
	char name[50];
	char major[50];
	int stNumber;

	printf("이름을 입력하시오: ");
	scanf_s("%s", name, 49);
	printf("전공을 입력하시오: ");
	scanf_s("%s", major, 49);
	printf("학번을 입력하시오: ");
	scanf_s("%d", &stNumber);

	printf("당신의 이름: %s \n", name);
	printf("당신의 전공: %s \n", major);
	printf("당신의 학번: %d \n", stNumber);

	system("pause");
}
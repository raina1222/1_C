#include <stdio.h>
#include <windows.h>
void main() {
	char name;
	int age;
	double weight;
	printf("당신 이름의 영문 이니셜을 입력하시오: ");
	scanf_s("%c", &name, 1);
	printf("당신의 나이와 몸무게를 입력하시오: ");
	scanf_s("%d %lf", &age, &weight);
	printf("이름의 영문 이니셜은 %c, 나이는%d, 몸무게는 %lf입니다.\n", name, age, weight);
	system("pause");
}
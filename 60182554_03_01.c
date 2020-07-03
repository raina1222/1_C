#include <stdio.h>
#include <windows.h>
void main() {
	char name;
	int age;
	double weight;
	name = 'k';
	age = 45;
	weight = 59.8;
	printf("이름의 영문 이니셜은 %c, 나이는 %d세, 몸무게는 %lf입니다.\n", name, age, weight);
	system("pause");
}
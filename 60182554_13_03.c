#include<stdio.h>
#include<windows.h>

void main() {
	char name[50];
	int kor, eng, math;
	double avg;

	printf("이름을 입력하시오: \n");
	gets(name);
	printf("국어 점수를 입력하시오: ");
	scanf_s("%d", &kor);
	printf("영어 점수를 입력하시오: ");
	scanf_s("%d", &eng);
	printf("수학 점수를 입력하시오: ");
	scanf_s("%d", &math);
	
	avg = (kor + eng + math) / 3.0;
	printf("%s의 평균 점수: %lf \n", name, avg);

	system("pause");
}
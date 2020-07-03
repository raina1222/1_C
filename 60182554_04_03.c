#include <stdio.h>
#include <windows.h>

void main() {
	int kor, eng, math, total;

	printf("국어 점수를 입력하시오: ");
	scanf_s("%d", &kor);

	printf("영어 점수를 입력하시오: ");
	scanf_s("%d", &eng);

	printf("수학 점수를 입력하시오: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	printf("당신의 점수 총합은 %d점 입니다.\n", total);

	system("pause");
}
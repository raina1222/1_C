#include <stdio.h>
#include <windows.h>

void main() {
	int kor, eng, math, total;
	double avg;

	printf("국어 점수를 입력하시오: ");
	scanf_s("%d", &kor);

	printf("영어 점수를 입력하시오: ");
	scanf_s("%d", &eng);

	printf("수학 점수를 입력하시오: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = total / 3.0;
		printf("당신의 점수 총합은 %d점, 평균은 %lf입니다.\n", total, avg);

	system("pause");

}
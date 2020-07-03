#include<stdio.h>
#include<windows.h>

void main() {
	int math[5], sum, i;
	double avg;
	sum = 0;

	for (i = 0; i < 5; i++) {
		printf("%d번째 학생의 수학 점수를 입력하시오: ", i + 1);
		scanf_s("%d", &math[i]);
	}
	for (i = 0; i < 5; i++)
		sum += math[i];

	avg = sum / 5.0;
	printf("평균성적: %lf \n", avg);

	system("pause");
}
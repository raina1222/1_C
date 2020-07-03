#include <stdio.h>
#include <windows.h>

void main() {
	int kor, eng, math;
	double avg;

	printf("[국어, 영어, 수학]순으로 점수를 입력하시오: ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3.0;

	if (avg >= 60)
		printf("합격입니다!\n");

	else
		printf("불합격입니다!\n");

	system("pause");
}
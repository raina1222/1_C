#include<stdio.h>
#include<windows.h>

void main() {
	int math[5], max, i;

	for (i = 0; i < 5; i++) {
		printf("%d번째 학생의 수학 점수를 입력하시오: ", i + 1);
		scanf_s("%d", &math[i]);
	}
	max = math[0];
	for (i = 1; i < 5; i++) {
		if (math[i] > max)
			max = math[i];
	}
	printf("최고점수: %d \n", max);
	system("pause");
}
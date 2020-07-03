#include <stdio.h>
#include <windows.h>
void main() {
	int stNumber;
	int voteNumber;
	printf("당신의 학번을 입력하시오.: ");
	scanf_s("%d", &stNumber);
	printf("후보자 번호를 입력하시오.(1~4): ");
	scanf_s("%d", &voteNumber);
	printf("%d학번 학생은 %d번 후보에게 투표를 했습니다.\n", stNumber, voteNumber);
	system("pause");
}
#include<stdio.h>
#include<windows.h>

void main() {
	int math[5], sum, i;
	double avg;
	sum = 0;

	for (i = 0; i < 5; i++) {
		printf("%d��° �л��� ���� ������ �Է��Ͻÿ�: ", i + 1);
		scanf_s("%d", &math[i]);
	}
	for (i = 0; i < 5; i++)
		sum += math[i];

	avg = sum / 5.0;
	printf("��ռ���: %lf \n", avg);

	system("pause");
}
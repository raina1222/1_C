#include <stdio.h>
#include <windows.h>

void main() {
	int kor, eng, math, total;
	double avg;

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &kor);

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &eng);

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = total / 3.0;
		printf("����� ���� ������ %d��, ����� %lf�Դϴ�.\n", total, avg);

	system("pause");

}
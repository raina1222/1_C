#include <stdio.h>
#include <windows.h>

void main() {
	int kor, eng, math;
	double avg;

	printf("[����, ����, ����]������ ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3.0;

	if (avg >= 60)
		printf("�հ��Դϴ�!\n");

	else
		printf("���հ��Դϴ�!\n");

	system("pause");
}
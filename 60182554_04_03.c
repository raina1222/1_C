#include <stdio.h>
#include <windows.h>

void main() {
	int kor, eng, math, total;

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &kor);

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &eng);

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	printf("����� ���� ������ %d�� �Դϴ�.\n", total);

	system("pause");
}
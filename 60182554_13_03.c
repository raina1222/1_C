#include<stdio.h>
#include<windows.h>

void main() {
	char name[50];
	int kor, eng, math;
	double avg;

	printf("�̸��� �Է��Ͻÿ�: \n");
	gets(name);
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &kor);
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &eng);
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &math);
	
	avg = (kor + eng + math) / 3.0;
	printf("%s�� ��� ����: %lf \n", name, avg);

	system("pause");
}
#include<stdio.h>
#include<windows.h>

void main() {
	int math[5], max, i;

	for (i = 0; i < 5; i++) {
		printf("%d��° �л��� ���� ������ �Է��Ͻÿ�: ", i + 1);
		scanf_s("%d", &math[i]);
	}
	max = math[0];
	for (i = 1; i < 5; i++) {
		if (math[i] > max)
			max = math[i];
	}
	printf("�ְ�����: %d \n", max);
	system("pause");
}
#include <stdio.h>
#include <windows.h>

void main() {
	int hour, min, sec;

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &sec);

	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec = (sec % 3600) % 60;

	printf("�Է��� �ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", hour, min, sec);

	system("pause");
}
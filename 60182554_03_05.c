#include <stdio.h>
#include <windows.h>
void main() {
	int stNumber;
	int voteNumber;
	printf("����� �й��� �Է��Ͻÿ�.: ");
	scanf_s("%d", &stNumber);
	printf("�ĺ��� ��ȣ�� �Է��Ͻÿ�.(1~4): ");
	scanf_s("%d", &voteNumber);
	printf("%d�й� �л��� %d�� �ĺ����� ��ǥ�� �߽��ϴ�.\n", stNumber, voteNumber);
	system("pause");
}
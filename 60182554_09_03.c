#include <stdio.h>
#include <windows.h>

void main() {
	int choice;

	do {
	printf("������ 1, ������ 2, ���ڱ�� 3, ����� 0�� �Է��Ͻÿ�:");
	scanf_s("%d", &choice);

		switch (choice) {
		case 1: printf("������ �½��ϴ�!\n"); break;
		case 2: printf("������ �½��ϴ�!\n"); break;
		case 3: printf("���ڱ⸦ �½��ϴ�!\n"); break;
		case 0: printf("����� 0�� �Է��Ͽ� ����, ����, ���� �����մϴ�.\n"); break;
		default: printf("����� ����, ����, ���� �������� �ʾҽ��ϴ�.\n");
		}
	} while (choice != 0);
	system("pause");
}
#include<stdio.h>
#include<windows.h>

void main() {
	int choice;

	printf("�簢��(1), �ﰢ��(2), ��(3)�� �ϳ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &choice);
	
	switch (choice) {
	case 1: printf("Rectangle!\n"); break;
	case 2: printf("Triangle!\n"); break;
	case 3: printf("Circle!\n"); break;
	default: printf("Unknown!\n");
	}
	system("pause");
}
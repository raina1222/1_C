#include<stdio.h>
#include<windows.h>

void main() {
	int choice;

	printf("사각형(1), 삼각형(2), 원(3)중 하나를 입력하시오: ");
	scanf_s("%d", &choice);
	
	switch (choice) {
	case 1: printf("Rectangle!\n"); break;
	case 2: printf("Triangle!\n"); break;
	case 3: printf("Circle!\n"); break;
	default: printf("Unknown!\n");
	}
	system("pause");
}
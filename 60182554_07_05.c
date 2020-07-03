#include <stdio.h>
#include <windows.h>

void main() {
	int mounth;

	printf("1 ~12까지 월을 입력하시오: ");
	scanf_s("%d", &mounth);

	switch (mounth) {
	case 1: printf("Jan.\n"); break;
	case 2: printf("Feb.\n"); break;
	case 3: printf("Mar.\n"); break;
	case 4: printf("Apr.\n"); break;
	case 5: printf("May.\n"); break;
	case 6: printf("June.\n"); break;
	case 7: printf("July.\n"); break;
	case 8: printf("Aug.\n"); break;
	case 9: printf("Sept.\n"); break;
	case 10: printf("Oct.\n"); break;
	case 11: printf("Nov.\n"); break;
	case 12: printf("Dec.\n"); break;
	default: printf("잘못 입력하셨습니다.\n");
	}
	system("pause");
}
#include <stdio.h>
#include <windows.h>

void main() {
	int mounth;

	printf("월을 입력하시오(1~12): ");
	scanf_s("%d", &mounth);

	if (mounth == 1 || mounth == 2 || mounth == 3)
		printf("1사분기 입니다.\n");

	else if (mounth == 4 || mounth == 5 || mounth == 6)
		printf("2사분기 입니다.\n");

	else if (mounth == 7 || mounth == 8 || mounth == 9)
		printf("3사분기 입니다.\n");

	else if (mounth == 10 || mounth == 11 || mounth ==12)
		printf("4사분기 입니다.\n");

	else
		printf("잘못 입력하셨습니다.\n");

	system("pause");
}
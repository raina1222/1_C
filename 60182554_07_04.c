#include <stdio.h>
#include <windows.h>

void main() {
	int mounth;

	printf("���� �Է��Ͻÿ�(1~12): ");
	scanf_s("%d", &mounth);

	if (mounth == 1 || mounth == 2 || mounth == 3)
		printf("1��б� �Դϴ�.\n");

	else if (mounth == 4 || mounth == 5 || mounth == 6)
		printf("2��б� �Դϴ�.\n");

	else if (mounth == 7 || mounth == 8 || mounth == 9)
		printf("3��б� �Դϴ�.\n");

	else if (mounth == 10 || mounth == 11 || mounth ==12)
		printf("4��б� �Դϴ�.\n");

	else
		printf("�߸� �Է��ϼ̽��ϴ�.\n");

	system("pause");
}
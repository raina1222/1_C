#include <stdio.h>
#include <windows.h>

void main() {
	double fahr, cels;

	printf("ȭ�� �µ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &fahr);

	cels = 5.0 / 9 * (fahr - 32);
	printf("���� �µ� %lf �Դϴ�.\n", cels);

	system("pause");
}
#include <stdio.h>
#include <windows.h>

void func01(int a, int b) {
	int res;
	res = a * a + b * b;
	printf("%d \n", res);

}
void func02(int a, int b) {
	int i, j;
	for (j = 1; j <= a; j++) {

		for (i = 1; i <= b; i++) {
			printf("*");
		}
		printf("\n");
	}
}
	

void main() {
	int num1, num2;
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	printf("ù ��° �Լ� ���� ���:");
	func01(num1, num2);
	printf("�� ��° �Լ� ���� ���: \n");
	func02(num1, num2);

	system("pause");
}
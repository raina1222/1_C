#include <stdio.h>
#include <windows.h>

void main() {
	int a, b, sum, number;
	sum = 0;
	number = 1;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	while (number <= 500) {
		if (number % a == 0 && number % b == 0)
			sum += number;
	
		number++;
	}
	printf("1~500������ ���� �� �Է��� �μ��� ������� ����: %d \n", sum);
	
	system("pause");
}
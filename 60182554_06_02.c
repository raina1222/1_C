#include <stdio.h>
#include <windows.h>

void main() {
	double height;
	int age;

	printf("����� Ű�� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf %d", &height, &age);

	if (height >= 120 && age >= 5) {
		printf("�¼� �����մϴ�!\n");
		printf("���� �ð� �Ǽ���~~\n");
	}
	else {
		printf("�¼� �Ұ��մϴ�!\n");
		printf("���� ��ȸ��...\n");
	}
	system("pause");
}
#include<stdio.h>
#include<windows.h>

void gugudan(int i){
	int j;
for (j = 1; j <= 9; j++)
printf("%d * %d = %d \n", i, j, i * j);
}
void main() {
	int number;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	gugudan(number);

	system("pause");
}
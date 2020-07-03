#include<stdio.h>
#include<windows.h>

void gugudan(int i){
	int j;
for (j = 1; j <= 9; j++)
printf("%d * %d = %d \n", i, j, i * j);
}
void main() {
	int number;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	gugudan(number);

	system("pause");
}
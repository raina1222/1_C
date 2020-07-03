#include <stdio.h>
#include <windows.h>

void main() {
	double num1, num2, result;
	printf("½Ç¼ö µÎ °³¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf_s("%lf %lf", &num1, &num2);

	result = num1 + num2;
	printf("µ¡¼À °á°ú: %lf \n", result);

	result = num1 - num2;
	printf("»¬¼À °á°ú: %lf \n", result);

	result = num1 * num2;
	printf("°ö¼À °á°ú: %lf \n", result);

	result = num1 / num2;
	printf("³ª´«¼À °á°ú: %lf \n", result);
	system("pause");
}
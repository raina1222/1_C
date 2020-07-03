#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

void main() {
	int number;

	srand((unsigned)time(NULL));
	number = (rand() % 100) + 1;

	if(number <= 5)
		printf("1µî »óÇ°¿¡ ´çÃ· µÇ¼Ì½À´Ï´Ù! \n");
	else if(number > 5 && number <= 20)
		printf("2µî »óÇ°¿¡ ´çÃ· µÇ¼Ì½À´Ï´Ù! \n");
	else if(number >20 && number <= 50)
		printf("3µî »óÇ°¿¡ ´çÃ· µÇ¼Ì½À´Ï´Ù! \n");
	else
		printf("4µî »óÇ°¿¡ ´çÃ· µÇ¼Ì½À´Ï´Ù! \n");
	system("pause");
}
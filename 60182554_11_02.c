#include<stdio.h>
#include<windows.h>
#include<math.h>


void samgak(double an) {
	double s, c, t, rad;

	rad = (an * 3.141592) / 180;

	s = sin(rad);
	c = cos(rad);
	t = tan(rad);

	printf("�Է��� ������ sin��: %lf \n", s);
	printf("�Է��� ������ cosin��: %lf \n", c);
	printf("�Է��� ������ tangent��: %lf \n", t);
}
void main() {
	double angle;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &angle);

	samgak(angle);

	system("pause");
}
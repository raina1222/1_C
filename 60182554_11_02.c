#include<stdio.h>
#include<windows.h>
#include<math.h>


void samgak(double an) {
	double s, c, t, rad;

	rad = (an * 3.141592) / 180;

	s = sin(rad);
	c = cos(rad);
	t = tan(rad);

	printf("입력한 각도의 sin값: %lf \n", s);
	printf("입력한 각도의 cosin값: %lf \n", c);
	printf("입력한 각도의 tangent값: %lf \n", t);
}
void main() {
	double angle;

	printf("각도를 입력하시오: ");
	scanf_s("%lf", &angle);

	samgak(angle);

	system("pause");
}
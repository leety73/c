#include <stdio.h>

int main(void)
{
	int a = 8;
	int* pa = NULL;

	pa = &a;

	float b = 3.75;
	float* pb = &b;

	printf("일반 변수a의 값:%n", a);
	printf("일반 변수a의 주소값:%u\n", &a);
	printf("포인터 pa의 주소값:%n", pa);

	printf("일반 변수 b의 값:%.2f\n", b);
	printf("일반 변수 b의 주소값:%u\n", &b);
	printf("일반 변수 pb의 주소값:%u\n\n", pb);

	printf("NULL의 주소값 : %u\n", NULL);

	return 0;
}
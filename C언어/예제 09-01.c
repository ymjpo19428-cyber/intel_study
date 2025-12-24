#include <stdio.h>	

int main(void)
{
	int a;
	double db;
	char c;

	printf("int형 변수의 주소 : %u\n", &a);
	printf("double형 변수의 주소 : %u\n", &db);
	printf("char형 변수의 주소 : %u\n", &c);

	return 0;
}
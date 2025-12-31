#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, result;
	char sig;

	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &num1, &sig, &num2);

	if (sig == '+')
	{
		result = num1 = num2;
	}
	else if (sig == '-')
	{
		result = num1 - num2;
	}
	else if (sig == '*')
	{
		result = num1 * num2;
	}
	else
	{
		result = num1 / num2;
	}

	printf("%d%c%d=%d\n", num1, sig, num2, result);

	return 0;

}
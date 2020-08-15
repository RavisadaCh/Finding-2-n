#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a;
	int b = 1;
	printf("Enter a number for degree : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		b = b * 2;
	}
	printf("The result of 2^%d is %d", a, b);

	return 0;
}
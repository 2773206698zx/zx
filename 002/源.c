#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int sum = 0;

	scanf_s("%d%d%d%d", &num1, &num2,&num3,&num4);
	sum = num1 + num2 + num3 + num4;
	printf("sum= %d\n", sum);
	return 0;
}

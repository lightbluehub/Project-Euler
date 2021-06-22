#include<stdio.h>

int main()
{
	int x, sum1, sum2, difference;
	x = 1; sum1 = sum2 = difference = 0;

	for (x = 1; x <= 100; x++)
	{
		sum1 += (x*x);
		sum2 += x;
    }
	sum2 = sum2 * sum2;
    difference = sum2 - sum1;
	printf("su khac biet la:%d\n", difference);
}
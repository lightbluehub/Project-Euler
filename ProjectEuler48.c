#include<stdio.h>

#define N 10000000000
int main()
{
	unsigned long long	temp, result;
	unsigned int i, j;
	result = 0;
	for (i = 1; i < 1000; i++)
	{
		temp = i;
		for (j = 1; j < i; j++)// so lan nhan temp voi i de duoc so n^n
		{
			temp *= i;
			temp %= N;// chi lay 10 chu so cuoi nhan voi nhau
		}
		result += temp;
		result %= N;// chi lay 10 chu so cuoi cong voi nhau 
	}
	printf("muoi chu so cuoi cung la: %llu", result);
	return 0;
}
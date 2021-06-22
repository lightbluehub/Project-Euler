#include<stdio.h>

int main()
{
	int x, sum;
	x = sum = 0;
	for (x = 0; x < 1000; x++)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			sum += x;
		}
	}
	printf("tong la:%d\n", sum);
	return 0;
}


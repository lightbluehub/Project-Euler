#include<stdio.h>
// ham cong binh phuong cac chu so trong 1 so
long number_chain(long number)
{
	int digit;
	long arrive = 0;
	while (1)
	{
		while (number > 0)
		{
			digit = number % 10;
			arrive += digit * digit;
			number /= 10;
		}
		if (arrive == 1)
			return arrive;
		if (arrive == 89)
			return arrive;

		number = arrive;// tao 1 so moi
		arrive = 0;
	}
}
int main()
{
	long start = 2, count = 0;
	for (long i = 2; i < 10000000; i++)
	{
		if (number_chain(i) == 89)
			count++;
	}
	printf("%d", count);
	return 0;
}
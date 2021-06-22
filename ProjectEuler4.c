#include<stdio.h>

int main()
{
	int x, y, n;
	int palindrome, reverse, max;
	max = 0;

	for (x = 100; x <= 999; x++)
	{
		for (y = 100; y <= 999; y++)
		{
			palindrome = x * y;
			n = palindrome;
			reverse = 0;
			
			while (n > 0)
			{
				reverse = 10 * reverse + n % 10;
				n = n / 10;

			}
			if ((reverse == palindrome) && (palindrome > max))
			{
				max = palindrome;
			}


		}
	}

	printf("so palindrome lon nhat la:%d\n", max);

}

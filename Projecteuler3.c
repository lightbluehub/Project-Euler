#include <stdio.h>

int main() {

	long long num;
	num = 600851475143;
	int max_prime = 2, odd_prime = 3;
	while (num % 2 == 0)
	{
		max_prime = 2;
		num = num / 2;

	}


	while (num >= 2)
	{
		if (num % odd_prime == 0)
		{
			max_prime = odd_prime;
			num = num / odd_prime;
		}
		else {
			odd_prime += 2;
		}

	}

	printf(" %d\n", max_prime);

}
#include<stdio.h>

// Ham kiem tra so do co phai la so nguyen to
int isprime(int n) {
	// Neu n < 2 thi khong phai la SNT
	if (n < 2) {
		return 0;
	}

	// Neu n = 2 la SNT
	if (n == 2) {
		return 1;
	}

	// Neu n la so chan thi ko phai la SNT
	if (n % 2 == 0) {
		return 0;
	}

	// Lap qua cac so le
	for (int i = 3; i < (n-1); i += 2) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;
}


int main()
{
	int n = 1;
	int count = 1;
	while (count <= 10001)
	{
	
		if (isprime(n))
		{
            printf("count: %d, so nguyen to la: %d\n", count, n);
			count += 1;
		}
		n += 1;
    }
}
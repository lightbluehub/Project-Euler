
#include <stdio.h>
#include <math.h>

// Ham kiem tra so do co phai la so nguyen to
//  1 neu dung, 0 neu sai
int isprime(int n) {
	// Neu n < 2 thi khong phai la SNT
	if (n < 2) {
		return 0;
	}

	// Neu n = 2 la SNT
	if (n == 2) {
		return 1;
	}

	// Neu n la so chan thi khong phai la SNT
	if (n % 2 == 0) {
		return 0;
	}

	// Lap qua cac so le
	for (int i = 3; i < (n - 1); i += 2) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;
}
int main()
{
	int a, b, n;
	int max = 0, max1 = 0, max2 = 0;

	for (a = -999; a < 1000; a++) {
		for (b = -1000; b <= 1000; b++) {
			for (n = 0; isprime(n * n + a * n + b); n++);//n * n + a * n + b tao ra so nguyen to 
			if (n > max) {
				max = n;
				max1 = a;
				max2 = b;
			}
		}
	}
	printf("%d\n", max1 * max2);
    return 0;
}

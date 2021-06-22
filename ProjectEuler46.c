#include <stdio.h>
#include <stdlib.h>

//ham kiem tra so nguyen to
unsigned int isprime(unsigned int n)
{
	if (n < 2) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}
	if (n % 2 == 0) {
		return 0;
	}
	for (int i = 3; i < (n - 1); i += 2) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	//n = p + 2 * k ^ 2
	int N = 0;
	for (int n = 3; N == 0; n += 2) {
		if (!isprime(n)) {
			N = n;
			for (int k = 1; k * k < n / 2; k++) {
				int p = n - (2 * k * k);
				if (isprime(p)) {
					N = 0;
					break;
				}
			}
		}
	}
	printf("gia tri la: %d", N);
	return 0;
}
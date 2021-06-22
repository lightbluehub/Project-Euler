

#include<stdio.h>

// Ham kiem tra so do co phai la so nguyen to
// kết quả: 1 nếu đúng, 0 nếu sai
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
	long long n;
	long long sum;
	n = 1;
	sum = 0;
	while (n < 2000000)
	{
		if (isprime(n))
		{
			sum += n;
			printf(" tong la: %lld\n", sum);
		}
		n += 1;
	}


}


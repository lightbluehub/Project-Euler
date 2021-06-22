#include<stdio.h>
#include<math.h>
//ham kiem tra so nguyen to
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
//ham main
int main()
{
	unsigned int i, count, sum;
	count = sum = 0;
	for (i = 10; count < 11; i++) {
		unsigned  int a, b, c, d;
		if (!isprime(i)) {
			continue;
		}
		//xoa tu phai sang trai
		a = i;
		while (a != 0) {
			if (!isprime(a)) {
				goto OUT;
			}
			a /= 10;
		}
		// xoa tu trai sang phai
		a = i;
		b = log10(i);
		c = pow(10, b);
		while (c>1) {
			d = a % c;
	        if (!isprime(d)) {
				goto OUT;
			}
			c /= 10;
		}
		sum += i;
		count++;
	OUT:;
	}
    printf("tong la: %d", sum);
	return 0;
}
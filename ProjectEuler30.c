#include <stdio.h>
#include <math.h>

int main() 
{
	int i, a, b, c, d, e, f, n, sum;
	int number;
	sum = 0;

	for (i = 10; i < 100; i++) {
		a = i % 10;
		b = i / 10;
		number = pow(a, 5) + pow(b, 5);
		if (number == i)
			sum += number;
	}

	for (i = 100; i < 1000; i++) {
		n = i;
		a = n % 10;
		n /= 10;
		b = n % 10;
		n /= 10;
		c = n;
		number = pow(a, 5) + pow(b, 5) + pow(c, 5);
		if (number == i)
			sum += number;
	}

	for (i = 1000; i < 10000; i++) {
		n = i;
		a = n % 10;
		n /= 10;
		b = n % 10;
		n /= 10;
		c = n % 10;
		n /= 10;
		d = n % 10;
		number = pow(a, 5) + pow(b, 5) + pow(c, 5) + pow(d, 5);
		if (number == i)
			sum += number;
	}

	for (i = 10000; i < 100000; i++) {
		n = i;
		a = n % 10;
		n /= 10;
		b = n % 10;
		n /= 10;
		c = n % 10;
		n /= 10;
		d = n % 10;
		n /= 10;
		e = n;
		number = pow(a, 5) + pow(b, 5) + pow(c, 5) + pow(d, 5) + pow(e, 5);
		if (number == i)
			sum += number;
	}

	for (i = 100000; i < 1000000; i++) {
		n = i;
		a = n % 10;
		n /= 10;
		b = n % 10;
		n /= 10;
		c = n % 10;
		n /= 10;
		d = n % 10;
		n /= 10;
		e = n % 10;
		n /= 10;
		f = n;
		number = pow(a, 5) + pow(b, 5) + pow(c, 5) + pow(d, 5) + pow(e, 5) + pow(f, 5);
		if (number == i)
			sum += number;
	}

	printf("tong la: %d\n", sum);

	return 0;
}
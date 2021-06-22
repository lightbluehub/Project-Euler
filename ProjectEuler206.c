#include <stdio.h>

int digit(unsigned int x) {
	long long l = x;
	l = l * l;
	if (l % 10 != 0) return 0;
	l /= 100;
	if (l % 10 != 9) return 0;
	l /= 100;
	if (l % 10 != 8) return 0;
	l /= 100;
	if (l % 10 != 7) return 0;
	l /= 100;
	if (l % 10 != 6) return 0;
	l /= 100;
	if (l % 10 != 5) return 0;
	l /= 100;
	if (l % 10 != 4) return 0;
	l /= 100;
	if (l % 10 != 3) return 0;
	l /= 100;
	if (l % 10 != 2) return 0;
	l /= 100;
	if (l % 10 != 1) return 0;
	l = x;
	l = l * l;
	
	return 1;
}

int main() {
	unsigned int n = 1000000010;//hinh vuong ket thuc bang 9 thi so do ket thuc bang 3 hoac 7
	unsigned int m = 4 * n;
	while (n < m) {
		n += 20;
		if (digit(n))
			printf("so do la: %d\n", n);
	}
	return 0;
}
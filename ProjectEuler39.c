#include<stdio.h>

int main()
{
	unsigned int a, b, c, p, max1, max2, count;
    max1 = max2 = 0;
	for (p = 0; p <= 1000; p++) {
		count = 0;
		for (a = 1; a < p / 2; a++) {
			for (b = 1; b < p / 3; b++) {
				c = p - a - b;
				if (a * a + b * b == c * c) {// tam giac vuong
					count++;
				}
			}
		}
		if (count > max1)
		{
			max1 = count;
			max2 = p;
		}
	}
	printf("gia tri la: %d", max2);
	return 0;
}
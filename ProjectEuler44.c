#include <stdio.h>
#include <limits.h>// thu vien gioi han gia tri cua cac kieu bien char, int, long
#include <math.h>
#define N 10000
//ham tao ra so ngu giac
unsigned int pentagonal(unsigned int n)
{
	return (n * (3 * n - 1)) / 2;	
}
//ham kiem tra co la so ngu giac
unsigned int ispentagonal(unsigned int n)
{
	unsigned sq = sqrt(1 + 24 * n);// tu phuong trinh bac 2	tim ham nghich dao																							
	return sq * sq == (1 + 24 * n) && (1 + sq) % 6 == 0;
}
int main()
{
	unsigned int i, j, k, l, min;
	min = UINT_MAX;
	for (i = 1; i < N; i++) {
		for (j = i; j < N; j++) {
			k = pentagonal(i);
			l = pentagonal(j);
			if (ispentagonal(l + k) && ispentagonal(l - k)) {
				if (l - k < min) {
					min = l - k;
				}
			}
		}
	}
	printf("gia  tri la: %d", min);
	return 0;
}
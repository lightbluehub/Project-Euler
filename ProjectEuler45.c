#include<stdio.h>
#include<math.h>
//ham kiem tra so tam giac
 unsigned int istriangle(unsigned long long n)
{
	unsigned long long sq = sqrt(1 + 8 * n);
	return sq * sq == 1 + 8 * n && (sq - 1) % 2 == 0;
}
//ham kiem tra so ngu giac
 unsigned int ispentagonal(unsigned long long n)
{
	unsigned long long sq = sqrt(1 + 24 * n);
	return sq * sq == 1 + 24 * n && (1 + sq) % 6 == 0;
}
//ham tinh so luc giac
unsigned long long hexagonal(unsigned long long n)
{
	return n * (2 * n - 1);
}
int main()
{
	unsigned long long i, n;
	
	
	for (i = 144;; i++)
	{
		n = hexagonal(i);
		if ((ispentagonal(n) && istriangle(n)))
		{
			break;// so dau tien la so tam giac tiep theo can tim, thoat vong lap
		}
	}
	printf("%llu\n", n);
	return 0;
}
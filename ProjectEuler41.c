#include<stdio.h>
#include<stdlib.h>

//ham kiem tra so nt
int isprime( int n) {
	if (n < 2) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}
	if (n % 2 == 0) {
		return 0;
	}
	for (int i = 3; i < n - 1; i += 2) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
//ham kiem tra n co chua cac chu so tu 1 den N khong 
int ispandigital(int n, int N)
{
	for (int i=1; i <= N; i++)
		if (!(contains(n, i))) {
			return 0;
		}
   return 1;
}
//ham kiem tra xem n co chua chu so m khong
int contains(int n, int m) {
	while (1) {
		if (n == 0) {
			return 0;
		}
		else if ((n % 10) == m) {
			return 1;
		}
	    n /= 10;
	}
}
int main()
{
	unsigned int n;
	/* so co 4 chu so, cho n chay tu so lon nhat roi giam
       dan neu chu so dau tien thoa man thi la so can tim*/
	for (n = 4321; n >= 1234; n -= 2)
	{
		if ((ispandigital(n, 4)) && (isprime(n)))
		{
			printf("%d\n", n);
			break ;
		}
	}
	/* so co 7 chu so, cho n chay tu so lon nhat roi giam 
	   dan neu chu so dau tien thoa man thi la so can tim*/
	for (n = 7654321; n > 1234567; n -= 2)
	{
		if ((ispandigital(n, 7)) && (isprime(n)))
		{
			printf("%d", n);
			break;
		}
	}
	return 0;
}
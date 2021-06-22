#include<stdio.h>
//ham kiem tra so palindromic khi doc nguoc lai ta van duoc so do
int ispalindromic(int number, int k)// so number co co so k
{
	int n = number;
	int reverse = 0;// so dao nguoc
	int m;
	while (n>0) {
		m = n % k;
		reverse = k * reverse + m;
		n /= k;
	}
	return number == reverse;
}
int main()
{
	int i, sum;
	sum = 0;
	for (i = 0; i < 1000000; i++) {
		if (ispalindromic(i, 10) && ispalindromic(i, 2))
			sum += i;
	}
	printf("tong la: %d", sum);
	return 0;
}
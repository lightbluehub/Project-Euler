#include <stdio.h>
#include <stdlib.h>
//ham kiem tra n co chua cac chu so tu 1 den N khong 
int ispandigital(int n, int N)
{
	for (int i = 1; i <= N; i++)
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
	int a[10000] = { 0 }; //mang tranh lap so
	int sum = 0;
	int p;
	for (int i = 1; i <= 9; i++) //truong hop x nhan xxxx = xxxx
	{
		for (int j = 1234; j < 10000 / i; j++)
		{
			p = 100000 * i * j + 10 * j + i;
			if (ispandigital(p,9))
				a[i * j] = 1;
		}
	}
	for (int i = 12; i <= 98; i++) //truong hop xx nhan xxx = xxxx
	{
		for (int j = 123; j < 10000 / i; j++)
		{
			p = 100000 * i * j + 100 * j + i;
			if (ispandigital(p,9))
				a[i * j] = 1;
		}
	}
	for (int k = 0; k < 10000; k++) //cong cac so thoa man
	{
		if (a[k] == 1)
			sum += k;
	}
	printf("%d", sum);
	return 0;
}

#include <stdio.h>

int main() {
	int a[500] = { 0 };// mang cac chu so trong ket qua 2^1000
	int sum, du, k;
	a[0] = 1;
	sum = du = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < 499; j++) {
			k = (a[j] * 2 + du)/10 ;// tim phan du khi thuc hien nhan
			if ((a[j] * 2 + du) >= 10)
			{
				a[j] = (a[j] * 2 + du) % 10;
				du = k;
			}
			else {
				a[j] = a[j] * 2 + du;
				du = 0;
			}
		}
	}
	for (int i = 499; i >=0; i--)
	{
		sum += a[i];
	}
	printf(" tong cac chu so la: %d", sum);
	return 0;
}
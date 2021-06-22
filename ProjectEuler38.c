#include <stdio.h>
#include <math.h>
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
	int i, j;
	for (i = 9999; i >= 9; i--) {
		unsigned int number = 0, digits = 0;//digits so chu so cua so 
		for (j = 1; digits < 9; j++) {
			unsigned int n = i * j;
			unsigned int l = log10(n) + 1;// chieu dai co so
			number *= pow(10, l);
			number += n;
			digits += l;
		}
		if (ispandigital(number,9)) {
			printf("%d %d\n", number);
			break;
		}
	}
	return 0;
}
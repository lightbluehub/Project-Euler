#include<stdio.h>

#define N 1000000
//ham dem so thua so rieng biet
unsigned int distinct_factors(unsigned int n)
{
	int count, i;
	count = 0;
	for (i = 2; i <= n; i++){
		if (n % i == 0) {
			count++;
			n /= i;
			while (n % i == 0) {//tim gia tri lap lai
				n /= i;
			}
		}
	}
	return count;
}
int main()
{
	unsigned int i, count;
	count = 0;
	for (i = 2; i < N; i++) {
		if (distinct_factors(i) == 4) 
			count++;
		else 
			count = 0;
		if (count == 4)
			break;//tim duoc 4 thua so rieng biet lien tiep dau tien thi dung vong lap
	}
	printf("gia tri so dau tien trong 4 so la: %d", i - 3);
}
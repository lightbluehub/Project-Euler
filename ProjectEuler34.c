#include <stdio.h>
//ham tinh giai thua
unsigned int giaithua(unsigned int n)
{
	unsigned f = 1;
	while (n != 0) {
		f *= n--;
	}
	return f;
}
int main()
{
	char a[7];// mang cac ky tu
	int i, allsum = 0;
	for (i = 3; i < 1000000; i++) {
		int j, sum = 0;
		snprintf(a, sizeof a, "%d", i);//chuyen cac so sang cac ky tu luu vao mang
		for (j = 0; a[j] != 0; j++) {
			sum += giaithua(a[j] - '0');
		}
		if (i == sum) {
			allsum += i;
		}
	}
	printf("%d\n", allsum);

	return 0;
}
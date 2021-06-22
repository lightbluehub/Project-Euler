#include <stdio.h>
//so than thien co tong cac uoc cua tong cac uoc cua no bang chinh no	
unsigned int tong_cac_uoc(unsigned int n) // ham tinh tong cac uoc
{
	unsigned int s = 0, i = 1;
	for(i=1;i<n;i++) {
		if (n % i == 0) s = s + i;
	}
	return s;
}

unsigned int tong_so_cap(unsigned int a, unsigned int b) {
	unsigned int i = a, j, sum = 0;
	for (i = a; i <= b; i++) {
	 j = tong_cac_uoc(i);
		if (j > i && tong_cac_uoc(j) == i)
			sum += i + j ;
	}
	return sum;
}

int main() {
	unsigned int allsum = tong_so_cap(1, 10000);
	printf("tong la: %d\n", allsum);
	return 0;
}

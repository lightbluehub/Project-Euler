#include <stdio.h>

int main() {
	int i, value, max, dem, d, z; /*max: gia tri lap lai dai nhat
									dem: so chu so trong chu ky lap*/
	max = 0;
	for (i = 2; i < 1000; i++)
	{
		dem = 1;// cho gia tri ban dau 1/d
		value = 10 % i;
		z = 1;// z la bien chay chi so chu so trong chu ky lap vi do dai chu ky lap toi da 1/d la d-1
		while (value != 1 && z < 1000)
		{
			value = value * 10;
			value = value % i;
			dem++;
			z++;
		}
		if (dem > max && z <1000)
		{
			max = dem;
			d = i;
		}
	}
	printf("%d\n", d);
	return 0;
}
#include <stdio.h>
#include <math.h>
//ham kiem tra snt
int isprime(unsigned int num)
{
	unsigned int lim = sqrt(num) + 1;

	if (num == 2 || num == 3)
		return 1;

	if (num < 2 || num % 2 == 0 || num % 3 == 0)
		return 0;

	for (unsigned int i = 5; i <= lim; i += 6)
		if (num % i == 0 || num % (i + 2) == 0)
			return 0;

	return 1;
}

int main()
{
	int numprimes = 3; // 3, 5, 7 la cac so nt o lop thu 2
	int numnums = 5;
	int i;

	for (i = 5; numprimes * 10 >= numnums; i += 2)
	{
		int corner = i * i;// goc cheo duoi ben phai k la snt

		for (int j = 1; j <= 3; j++)
			if (isprime(corner - j * (i - 1)))// gia tri 3 goc con lai cua 1 lop = corner - j * (i - 1)
				numprimes++;

		numnums += 4;// them 1 lop thi so le tang them 4
	}

	printf("%d\n", i - 2);
}
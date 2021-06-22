#include<stdio.h>

int main()
{
	int a, b, c, x, y, z, product; 
	a = b = c = x = y = z = 0; a < b < c;
	product  = 0;
	for (a = 1; a < (1000 / 3); a++)
	{
		for (b = 2; b < (1000 / 2); b++)
		{
			x = a * a;
			y = b * b;
			c = 1000 - a - b;
			z = c * c;
			if( (x + y) == z)
			{
				printf("a la:%d, b la:%d, c la:%d\n", a, b, c);
				product = a * b * c;
				printf("tich la:%d\n", product);
				return 0;
			}

		}

	}
}
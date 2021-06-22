#include<stdio.h>

int main()
{
	int x, y, z, sum;
	x = y = z = 1;
	sum = 0;
	
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		
        if (z % 2 == 0)
		
		{
			sum += z;
        }
		  
    }
	
	printf("tong la:%d\n", sum);

}
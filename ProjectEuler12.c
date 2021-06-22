#include<stdio.h>
																																									
int main()
{
	int i, n, trinumber, divisors;
	n = 1;	
	trinumber = 1; // triangle number
    while (n>=0)
	{																																											
		n ++;																																				
		trinumber += n;
		divisors = 0;
		for (i = 1; i*i<trinumber; i++) // moi so tu nhien deu co uoc khong vuot qua can chinh no
		{
			if (trinumber % i == 0)
				divisors += 2;
		}
		if (divisors > 500)
			break;
        
	}
	printf("so do la:%d, so uoc la: %d\n", trinumber, divisors);
	return 0;
}
#include<stdio.h>

int main()
{
	int i, x, y;//x la bien chay so chu so trong chuoi
	            //y là bien luu
	long long num; 
	int starting_number;
	y = 0;
	for (i = 2; i < 1000000; i++)
	{
		num = i;
		x = 0;
		while (num > 1) 
		{
            if (num % 2 == 0)
			{
				num = num / 2;
				x = x + 1;
			}
			else 
			{
				num = (num * 3) + 1;
				x = x + 1;
			}

		}
        if (x > y)
		{
		    starting_number = i;
			y = x;
		}
	
	}
		printf("so bat dau la:%d\n", starting_number);
		return 0;
}
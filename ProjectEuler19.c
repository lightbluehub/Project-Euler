#include <stdio.h>

int main()
{   // 1990 co 365 ngay va ngay 31-12-1990 la ngay thu 2_____(1+7x52=365)
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int k = 2; //bien gan cho ngay 1-1-1991 la ngay thu 3
	int day, month, year;
	int sunday = 0;

    for (year = 1901; year <= 2000; year++)
	{
        if (((year % 400 == 0) || (year % 4 == 0)))
			days[1] = 29;
		else
			days[1] = 28;

		for (month = 0; month < 12; month++)
		{
			for (day = 1; day <= days[month]; day++)
			{
				if (day == 1 && k == 0)
					sunday += 1;
                if (k == 6) // ngay thu 7
					k = 0;  //neu k=6 gan luon k=0 cho bien chay "day" chu  tiep theo la chu nhat
				else
					k += 1;//k=1 gan cho ngay thu 2
			}
		}
	}

	printf("so ngay chu nhat la: %d", sunday);

	return 0;
}
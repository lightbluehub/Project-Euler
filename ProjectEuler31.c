#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count = 0;
	for (int a = 0; a <= 200; a++) //đồng 1p
	{
		for (int b = 0; b <= 100; b++) //đồng 2p
		{
			for (int c = 0; c <= 40; c++) //đồng 5p
			{
				for (int d = 0; d <= 20; d++) //đồng 10p
				{
					for (int e = 0; e <= 10; e++) //đồng 20p
					{
						for (int f = 0; f <= 4; f++) //đồng 50p
						{
							for (int g = 0; g <= 2; g++) //đồng £1 (100p)
							{
								for (int h = 0; h <= 1; h++) //đồng £2 (200p)
								{
									if (1 * a + 2 * b + 5 * c + 10 * d + 20 * e + 50 * f + 100 * g + 200 * h == 200)
										count++;
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}


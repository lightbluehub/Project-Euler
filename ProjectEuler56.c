#include<stdio.h>

int main()
{
	int max = 0;
	int k = 0;
	for (int i = 1; i < 100; i++)
	{
		int arr[500] = { 0 };// mang cac chu so trong a^b
		arr[0] = 1;
		for (int j = 1; j < 100; j++)
		{
			int sum = 0;
			int du = 0;
			for (int k = 0; k < 500; k++)
			{
				int c = arr[k] * i + du;
				if (c > 9){
					du = c / 10;
					arr[k] = c % 10;
				}
				else{
					arr[k] = c;
					du = 0;
				}
			}
			for (int i = 0; i < 500; i++)
				sum += arr[i];
			if ( sum > max)
				max = sum;
		}
	}
	printf("%d", max);
	return 0;
}
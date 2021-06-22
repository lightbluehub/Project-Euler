#include<stdio.h>

int main()
{
	int arr1[1000] = { 0 }; // mang cac chu so F(n-1)
	int arr2[1000] = { 0 }; // mang cac chu so F(n-2)
	int arr3[1000] = { 0 }; // mang cac chu so F(n)
	arr1[0] = 1;
	arr2[0] = 1;
	int i,n = 2;
	while (1)
	{
		n++;// chi so dau tien la 3
		for (i = 0; i < 1000; i++)
		{
			arr3[i] = arr1[i] + arr2[i];
		}
		for (i = 0; i < 1000; i++)
		{
			arr1[i] = arr2[i];
		}
		for (i = 0; i < 1000; i++)
		{
			arr2[i] = arr3[i];
			if (arr3[i] > 9)
			{
				arr3[i + 1] = arr3[i + 1] + arr3[i] / 10;
				arr3[i] = arr3[i] % 10;
				arr2[i + 1] = arr2[i + 1] + arr2[i] / 10;
				arr2[i] = arr2[i] % 10;
			}
		}
		if (arr3[999] > 0)// chi so thu 1000
		{
			break;
		}
	}
	printf("chi so la: %d", n);
}
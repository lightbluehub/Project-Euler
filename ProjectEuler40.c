#include<stdio.h>
int max = 1000000;
int arr[1000000] = { 0 };
int main()
{
	int i = 0, k = 1;
	int product;
	while (k>=1)
	{
		if (i == max) {
			break;
		}
		int a = k, j = 0;
		int arr1[10] = { 0 };// mang cac chu so cua mot so	
		while (a != 0)// tim gia tri cho mang arr1
		{
			int b = a % 10;
			arr1[j] = b;
			j++;
			a /= 10;
		}
		while(j--)// o vong lap tren sau khi biet gt arr1 ta tang j len nen vong lap nay j phai giam di 1
		{
			arr[i] = arr1[j];
			i++;
			if (i == max) {
				break;
			}
		}
		k++;
	}
	product = arr[0] * arr[9] * arr[99] * arr[999] * arr[9999] * arr[99999] * arr[999999];
	printf("%d\n", product);
}
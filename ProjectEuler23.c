#include<stdio.h>

int main()
{
	int n = 28123;
	int arr[10000] = { 0 };// mang cac so phong phu nho hon 28123
	int a = 0;
	for (int i = 1; i <= n; i++)
	{
		int sum1 = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0) {
				sum1 = sum1 + j;
			}
		}
		if (sum1 > i) {
			arr[a] = i;
			a++;
		}
	}
	int arr1[30000] = { 0 };// mang tong hai so phong phu
	int sum2 = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if ((arr[i] + arr[j]) <= n) {
				sum2 = arr[i] + arr[j];// tong 2 so phong phu
				arr1[sum2] = 1;
			}
			else {
				break;
			}
		}
	}
	int sum3 = 0;
	for (int k = 0; k <= n; k++)// cac so nguyen <=28123
	{
		if (arr1[k] == 0) {
			sum3 = sum3 + k;
		}
	}
	printf("tong la: %d", sum3);
}
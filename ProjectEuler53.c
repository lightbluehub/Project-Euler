#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, count = 0;
	double log_val[101];

	log_val[0] = log_val[1] = 0;

	for (i = 2; i <= 100; i++)
		log_val[i] = log10(i) + log_val[i - 1];

	for (i = 2; i <= 100; i++)
		for (j = 1; j <= i; j++)
			if (log_val[i] - log_val[i - j] - log_val[j] >=6)// tu 1 trieu tro di
				count++;

	printf("%d", count);
}
//Tôi đã sử dụng mảng "log_val" để lưu trữ các giá trị log(cơ sở 10)
//của các giai thừa của các số từ 1 đến 100. các giai thừa được tìm thấy 
//bằng cách sử dụng recurrence : log_val[i] = log[i] + log_val[i - 1]; để
//kiểm tra xem nó có > 1000000 không.chuyển đổi cả hai mặt của bất đẳng thức thành lob(cơ sở 10)

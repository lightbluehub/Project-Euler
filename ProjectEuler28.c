#include<stdio.h>

int main()
{
	int n, sum1, sum2, allsum;
	sum2 = allsum = 0;
	sum1 = 1;// gia tri o chinh giua vong xoan oc
	for (n = 1; n <= 500; n++)// cac duong cheo
	{
		sum2 += 16*n*n + 4*n + 4;/*D(n,1) = 4n^2 - 2n + 1 (cheo phai ben duoi)
                                   D(n,2) = 4n^2 + 1      (cheo trai ben duoi)
                                   D(n,3) = 4n^2 + 2n + 1 (cheo trai ben tren)
                                   D(n,4) = 4n^2 + 4n + 1 (cheo phai ben tren)*/
	}
	allsum = sum1 + sum2;
	printf("tong cac so tren cac duong cheo la: %d", allsum);
	return 0;
}
//Tôi để n đại diện cho "vòng tròn" quan tâm với 1 ở trung tâm là n = 0, các số xung quanh 1 là n = 1, v.v.
//Sau đó, tôi thấy rằng vòng n có kích thước(2n + 1) * (2n + 1) và có 4n ^ 2 + 2n + 1 là thành viên lớn nhất.
//Khi đó các phần tử đường chéo của vòng n là :
//D(n, 1) = 4n ^ 2 - 2n + 1
//D(n, 2) = 4n ^ 2 + 1
//D(n, 3) = 4n ^ 2 + 2n + 1
//D(n, 4) = 4n ^ 2 + 4n + 1
//Và D(n, 4) + D(n, 1) = D(n, 2) + D(n, 3)
//Sau đó, chúng tôi muốn tìm tổng của các thành viên đường chéo của các vòng từ 0 đến 500 (vì vòng thứ 500 sẽ là 1001 * 1001).//
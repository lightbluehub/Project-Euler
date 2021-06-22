#include<stdio.h>

int main()
{
	int a[200] = { 0 };// mang cac chu so trong ket qua 100!
	int i, j, sum, du, k;
	a[0] = 1;
	sum = 0;
	for (i = 2; i < 100; i++) {
		du = 0;
		for (j = 0; j < 199; j++) {
			k = (a[j] * i + du) / 10;// tim phan du khi thuc hien nhan
			if ((a[j] * i + du) >= 10) {
				a[j] = (a[j] * i + du) % 10;
				du = k;
			}
			else {
				a[j] = a[j] * i + du;
				du = 0;
			}
		}
	}
	
	for (i = 199; i >=0; i--) {
		printf("%d", a[i]);
		sum += a[i];
	}
	
	printf("tong cac chu so la: %d\n", sum);

}
//Ta sẽ lấy từng phần tử của mảng nhân với i, từ A[0] đến A[m]
//Xét 1 phần tử bất kì A[j], có r là số dư khi nhân i với phần tử A[j - 1];
//Gán s = A[j] * i + r; (A[j] của mảng trước khi nhân)
//Vì A[j] chỉ lưu được 1 chữ số nên ta lưu A[j] = s % 10 (A[j] của mảng sau khi nhân)
//còn số dư r = s / 10;
//Cứ tiếp tục như vậy đến A[m - 1] - phần tử cuối cùng của mảng, nếu khi đó r = 0 thì coi như xong, ta được một mảng mới.
//Vậy r > 0 thì sao ? ? ?
//Ta sẽ lấy thêm 1 phần tử để lưu vào mảng, A[m] = r; khi này mảng có m + 1 phần tử
//Nhưng nếu r >= 10 thì sao ? ? ? , ta không thể lưu A[m] = r(vì mỗi phần tử chỉ lưu 1 chữ số)
//Vậy ta lưu A[m] = r % 10; tăng số phần tử của mảng lên 1 đơn vị và r = r / 10;
//Nếu r > 0 thì tiếp tục lưu A[m + 1] = r % 10, tăng số phần tử của mảng lên 1 đơn vị nữa;
//	Cứ tiếp tục như vậy cho đến khi số dư r bằng 0 thì sẽ không cần phải tìm một phần tử nữa của mảng để lưu kết quả và mảng mới coi như đã hoàn thành
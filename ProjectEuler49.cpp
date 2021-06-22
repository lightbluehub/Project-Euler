#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
//ham kiem tra snt
bool isprime(unsigned int n)
{
	if (n < 2) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	if (n % 2 == 0) {
		return false;
	}
	for (int i = 3; i < n - 1; i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
//ham kiem tra hoan vi
int ispermutation(unsigned int n)
{
	int d[] = { n / 1000,(n / 100) % 10,(n / 10) % 10,n % 10 };
	sort(d, d + 4);
	return 1000 * d[0] + 100 * d[1] + 10 * d[2] + d[3];
}
int main()
{
	bool a[4500];// mang cac so nguyen to (tu 1001-9999 co 4500 so le)	
	for (int i = 0; i < 4500; i++) {
		a[i] = isprime(1001 + 2 * i);// cac snt deu la so le
	}
	for (int n = 1001; n < 10000; n += 2) {
		for (int s = 2; s < (10000 - n) / 2; s += 2) {// n cang lon thi so cong vao nho di
			if (a[(n - 1001) / 2] && a[(n + s - 1001) / 2] && a[(n + 2 * s - 1001) / 2] &&
				(ispermutation(n) == ispermutation(n + s)) &&
				(ispermutation(n) == ispermutation(n + 2 * s)))
			{
				cout << n << n + s << n + 2 * s << endl;
			}
		}
	}
	return 0;
}
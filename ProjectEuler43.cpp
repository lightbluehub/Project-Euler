#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	unsigned d[] = { 0,1,2,3,4,5,6,7,8,9 };
	unsigned long long sum = 0;

	while (next_permutation(d, d + 10))//ham sinh hoan vi
	{
		if ((d[1] * 100 + d[2] * 10 + d[3]) % 2 == 0
			&& (d[2] * 100 + d[3] * 10 + d[4]) % 3 == 0
			&& (d[3] * 100 + d[4] * 10 + d[5]) % 5 == 0
			&& (d[4] * 100 + d[5] * 10 + d[6]) % 7 == 0
			&& (d[5] * 100 + d[6] * 10 + d[7]) % 11 == 0
			&& (d[6] * 100 + d[7] * 10 + d[8]) % 13 == 0
			&& (d[7] * 100 + d[8] * 10 + d[9]) % 17 == 0) {
			unsigned long long p = 1;
			for (int i = 0; i < 10; i++)
			{
				sum += d[9 - i] * p;// cong dan cac chu so trong mang tu phai qua trai
					p *= 10;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
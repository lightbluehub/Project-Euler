#include <algorithm>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	string num = "0123456789";
	int count = 0;
	while (true) 
	{
		count++;
		if (count == 1000000) {
			break;
		}
		next_permutation(num.begin(), num.end());
	}
	cout << num;
	return 0;
}
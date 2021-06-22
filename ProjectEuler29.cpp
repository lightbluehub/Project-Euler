#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main()
{
	std::set<double> setofintegers;
	for (int a = 2; a <= 100; a++){
		for (int b = 2; b <= 100; b++) {
			setofintegers.insert(pow(a, b));
		}
	}
	std::cout<<" so luong thuat ngu la "<< setofintegers.size()<< std::endl;
	return 0;
}

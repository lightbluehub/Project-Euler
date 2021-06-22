#include <iostream>
#include <fstream>
using namespace std;

int main() {
	unsigned int arr[100][100];
	ifstream file;
	file.open("triangle.txt");
	int l, n;
	for (l = 0; l < 100; l++) {
		for (n = 0; n < l + 1; n++) {
			file >> arr[l][n];
		}
	}
	for (l = 99; l >= 0; l--) {
		for (n = 0; n < l + 1; n++) {
			if (arr[l][n] > arr[l][n + 1])
				arr[l-1][n] += arr[l][n];
			else arr[l-1][n] += arr[l][n + 1];
		}
	}
	cout << arr[0][0] << endl;
}
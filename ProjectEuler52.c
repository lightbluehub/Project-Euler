#include <stdio.h>
//ham kiem tra chua cac chu so
int NumDigits(int number, char digits[10]) {
	char a[10] = { 0 };// mang cac chu so cua so khi chua nhan voi 2,3,4,5,6
	int i = 0;
	while (number > 0) {
		a[number % 10]++;
		number /= 10;
	}

    for (i = 0; i < 10; ++i) {
		if (a[i] != digits[i]) 
			return 0;
	}
	return 1;
}
// ham kiem tra 1 so
int CheckNumber(int number) {
	char digits[10] = { 0 };// mang cac chu so cua so khi da nhan voi 2,3,4,5,6
	int temp = number;
	while (temp > 0) { 
		digits[temp % 10]++; 
		temp /= 10;
	}
    if (!NumDigits(number * 2, digits)) return 0;
	if (!NumDigits(number * 3, digits)) return 0;
	if (!NumDigits(number * 4, digits)) return 0;
	if (!NumDigits(number * 5, digits)) return 0;
	if (!NumDigits(number * 6, digits)) return 0;
	return 1;
}
int main() {
	int number = 1;
	// neu khong thoa man dk thi tang so do len 1 so dau tien thoa man la so nho nhat can tim
	while (!CheckNumber(number)) {
		number++;
	}
		printf("%d\n", number);
}
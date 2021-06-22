#include <stdio.h>
#include <stdlib.h>
#define MAX_SUM 1000000
#define MAX_PRIMES MAX_SUM / 2

//kiem tra snt
int isPrime(int n) {
	if (n < 2) 
		return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
// tim max
int Maxtownum(int a, int b){
	return (a > b ? a : b);
}
int main() {
	int p[MAX_PRIMES];
	int n_primes = 0;
	int sum = 0;
	for (int i = 2; n_primes < MAX_PRIMES; i++) {// luu cac so nt vao mang va tinh tong cac so nt
		if (!isPrime(i)) 
			continue;
		if (sum + i >= MAX_SUM) 
			break;
		p[n_primes] = i;
		n_primes++;
		sum += i;
	}
	// thuc hien tru cac snt tu trai sang phai trong mang cac snt
	int S1 = sum;
	for (int i = 0; i < n_primes; i++) {
		if (isPrime(S1))// khi 2 so nt tru cho nhau ta duoc 1 so k phai snt
			break;
		S1 -= p[i];
	}
    // thuc hien tru cac snt tu phai sang trai khi da tim duoc s1
	int S2 = sum;
	for (int i = n_primes - 1; S2 > S1; i--) {
		if (isPrime(S2))
			break;
		S2 -= p[i];
	}

	printf("%d\n", Maxtownum(S1, S2));
	return 0;
}
#include<stdio.h>

int main() {
		long long int matrix[21][21]; //luoi 20x20 co 21x21 diem 
        int i, j;
		for (i = 0; i <= 20; i++) {
			for (j = 0; j <= 20; j++) {
				matrix[i][j] = 1; // khoi tao matran		 		
				}
		}
		for (i = 1; i < 21; i++) {
			for (j = 1; j < 21; j++) {
				// o duoi cung ben phai  = tong cac o ben tren va ben trai cua no
				matrix[i][j] = matrix[i- 1][j] + matrix[i][j - 1];
			}
		}
		printf("so duong di la: %lld", matrix[20][20]);
	}


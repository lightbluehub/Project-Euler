#include <stdio.h>
#include <string.h>


int main()
{

	char a1[9][10] = { "one","two","three","four","five","six","seven","eight","nine" };

	char a2[10][10] = { "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
		                 "seventeen","eighteen","nineteen" };
	char a3[8][10] = { "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
	
	char a4[9][15] = { "onehundred","twohundred","threehundred","fourhundred","fivehundred",
		              "sixhundred","sevenhundred","eighthundred","ninehundred" };

	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, sum9 = 0, allsum = 0;
	//1-9
	for (int i = 0; i < 9; i++) {
		sum1 += strlen(a1[i]);
	}
	//10-19
	for (int i = 0; i < 10	; i++) {
		sum2 += strlen(a2[i]);
	}
	//20,30,...90
	for (int i = 0; i < 8; i++) {
		sum3 += strlen(a3[i]);
	}
	//100,200,...900
	for (int i = 0; i < 9; i++) {
		sum4 += strlen(a4[i]);
	}
	//21-99
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			sum5 += strlen(a3[i]) + strlen(a1[j]);
		}
	}
	//101,102..109,201,202..209,301,302...
	for (int i = 0; i < 9;i++) {
		for (int j = 0; j < 9; j++) {
			sum6 += strlen(a4[i]) + strlen(a1[j]) + 3;//3 la so chu cai trong "and"
		}
	}
	//110,111,112,...119,210,211..
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10; j++) {
			sum7 += strlen(a4[i]) + strlen(a2[j]) + 3;//3 la so chu cai trong "and"
		}
	}
	//120,130,140,...
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			sum8 += strlen(a4[i]) + strlen(a3[j]) + 3;//3 la so chu cai trong "and"
		}
	}
	//121,122..129,131,132.. 139,...
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 9; k++) {
				sum9 += strlen(a4[i]) + strlen(a3[j]) + strlen(a1[k]) + 3;//3 la so chu cai trong "and"
			}
		}
	}
    allsum = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8 + sum9 +11;// 11 la so chu cai trong "one thousand"
	printf("%d", allsum);
}
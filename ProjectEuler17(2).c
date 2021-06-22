#include<stdio.h>
#include<string.h>

int temp;
char tempstring[25];// mang bien luu cua temp
char currstring[25]; //vd:ninehundredandninetynine(ket qua)
char numberstring[30][10] = {
	"one",
	"two",
	"three",
	"four",
	"five",
	"six",
	"seven",
	"eight",
	"nine",
	"ten",
	"eleven",
	"twelve",
	"thirteen",
	"fourteen",
	"fifteen",
	"sixteen",
	"seventeen",
	"eighteen",
	"nineteen",
	"twenty",
	"thirty",
	"forty",
	"fifty",
	"sixty",
	"seventy",
	"eighty",
	"ninety",
	"hundred",
	"thousand",
	"and"
};
void processtens(int number)
{
	temp = number % 10;
	if (temp != 0) {
		strcpy(tempstring, numberstring[temp - 1]);
		temp = number / 10;
		if (temp == 0) {
			strcpy(currstring, tempstring);//1,2,3,...,9
		}
		else if (number <= 19) {
			strcpy(currstring, numberstring[number - 1]);//11,12,...,19
		}
		else {
			strcpy(currstring, numberstring[temp + 17]);//21,22,...,29,31,32,...,39,.,91,92,...,99
			strcat(currstring, tempstring);
		}

	}
	else {
		temp = number / 10;
		if (temp == 1) {
			strcpy(currstring, numberstring[9]);//10
		}
		else {
			strcpy(currstring, numberstring[temp + 17]);//20,30,...,90
		}
	}


}
void processhundreds(int number)
{
	temp = number % 100;//101-199,201-299,...,901-999
	if (temp != 0) {
		processtens(temp);
		temp = number / 100;
		strcpy(tempstring, numberstring[temp - 1]);
		strcat(tempstring, numberstring[27]);  //noi 2 chuoi so tu 1 - 9 va hundred
		strcat(tempstring, numberstring[29]);  //noi 3 chuoi so tu 1-9, hundred va and
		strcat(tempstring, currstring); //noi chuoi vua co voi chuoi ket qua ? tren so co 2 chu so
		strcpy(currstring, tempstring); //gan cac so vua tim dc cho ket qua
	}
	else {
		temp = number / 100;
		strcpy(currstring, numberstring[temp - 1]); //1,2,..,9
		strcat(currstring, numberstring[27]); //hundred
	}

}
int main(void)

{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		if (i < 100) {
			processtens(i);
		}
		else if ((i >= 100) && (i < 1000)) {
			processhundreds(i);
		}
		else {//1000
			strcpy(currstring, numberstring[0]);
			strcat(currstring, numberstring[28]);
		}
		sum += strlen(currstring);
	}

	printf("ket qua la: %d", sum);
	return 0;
}
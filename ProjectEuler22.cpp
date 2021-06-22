#include<iostream>
#include<string>
#include<fstream> //doc file names.txt
#include<algorithm>//thu vien sap xep cac phan tu
using namespace std;
// ham tinh gia tri
int getVal(string str, int i) {
	int sum = 0;
    for (int j = 0; j < str.length(); j++)// duyet tat ca cac phan tu trong chuoi string
	{
		sum += str[j] - 64;/* gia tri cua ki tu do tru di gia tri ki tu
		                      A roi +1 trong ma ASCII ra so thu tu*/
	}
	return sum * i;
}

int main()
{
	string data[6000];// doc file
	ifstream file("names.txt");
	int size;//size: so phan tu doc duoc trong mang
	size = 0;
	while (!file.eof()) {
		file >> data[size++];
	}
	file.close();
	sort(data, data + size);//sap xep cac chuoi
    long long allsum = 0;
	for (int i = 0; i < size; i++)
	{
		allsum += getVal(data[i], i + 1);
	}
	cout << "tong la:" << allsum << endl;
	
	return 0;
}

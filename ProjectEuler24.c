#include<stdio.h>

int main()
{
        int c,i,localCounter;
        char counter[10] = {0};
        char chars[10]={0,1,2,3,4,5,6,7,8,9};
        c=1;
        while(c<1000000)
		{
                c++;
                counter[0]++;
                for(int i=0;i<10;i++)
				{
                        if(counter[i]>i){
                                counter[i+1]++;
                                counter[i]=0;
                        }
                }
        }
        for(int j=9;j>=0;j--)
		{
                i=0;
                localCounter=0;
                while(localCounter<counter[j])
				{
                        i++;
                        if(chars[i]>-1){
                                localCounter++;
                        }
                }
                printf("%d",chars[i]);
                chars[i]=-1;
        }
}
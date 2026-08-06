//Number of Digits in a particular Number counting program
#include<stdio.h>
int main()
{
    int n,count=0 ;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("The number of digits in the number are:%d",count);
    return 0;
}

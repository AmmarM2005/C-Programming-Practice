//WAP to print Multiplication Table of a Number
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the Number whose table you want to print: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }

    return 0;
}

//Program to print Factorial in C
#include<stdio.h>
int main()
{
    int N, i=1, factorial=1;
    printf("Enter the Number N:");
    scanf("%d",&N);
    if(N==0)
    {
        printf("1");
    }
    if(N==1)
    {
        printf("1");
    }
    else
    {
        while(i<=N)
        {
            factorial=factorial*i;
            i++;
        }
    }
    printf("Factorial is:%d",factorial);
    return 0;
}

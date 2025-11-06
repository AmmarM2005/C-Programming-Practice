//Program to print Sum of N Natural Numbers
#include<stdio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter the No. till where you want to print the sum of N Natural Numbers:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum+=i;
    }
    printf("The sum of N Natural Numbers:%d",sum);
    return 0;
}


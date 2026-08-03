//Write a C program that:
//Takes an integer N as input.
//Finds the sum of all even numbers from 1 to N.
//Prints the final sum.

#include<stdio.h>
int main()
{
    int n,i, sum=0;
    printf("Enter the Input N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("The Sum of N Even Numbers is:%d",sum);
    return 0;
}

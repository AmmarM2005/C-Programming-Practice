//Program to detect Whether a number is Prime or Not
#include<stdio.h>
int main()
{
    int n,i;
    int isPrime=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n<2)
    {
        printf("The number is not a Prime Number");
    }
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("The Number is Prime");
    }
    else{
        printf("The number is not a Prime Number");
    }


}

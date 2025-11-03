#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("Enter the number whose factorial is needed to be found: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f*=i;
    }

    printf("The Factorial of the number is:%d",f);
    return 0;
}

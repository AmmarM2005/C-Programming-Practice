//Program of Print Multiplication of N Natural Numbers (Method 1)
#include<stdio.h>
int main()
{
    int n,i,mul=1;
    printf("Enter the Value of N:");
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {
        mul=mul*i;
    }
    printf("The Multiplication of N Natural Numbers is:%d",mul);
    return 0;
}

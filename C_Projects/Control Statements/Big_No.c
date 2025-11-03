//WAP to print the bigger number
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("The number that is greater is :%d",a);
    }
    else
    {
        printf("The number that is greater is :%d",b);
    }
    return 0;
}

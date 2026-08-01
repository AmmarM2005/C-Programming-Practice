//WAP to print a message when a negative number is entered
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("%d is positive",num);
    }
    return 0;
}

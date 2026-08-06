#include<stdio.h>
int main()
{
    int num, rnum=0, rem, dig ;
    printf("Enter the number you want to reverse:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rnum=(rnum*10)+rem;
    }
    printf("The Reversed Number is %d",rnum);
    return 0;
}

#include<stdio.h>
int main()
{
    int n ,first=0 , second=1, third;
    int i;
    printf("Enter the number till where you want fibonacci series to get print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        third=first+second ;

    }
    printf("The Fibonacci series is %d %d %d: ",first ,second ,third);
    return 0;
}

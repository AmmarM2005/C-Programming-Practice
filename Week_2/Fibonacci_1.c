#include<stdio.h>
int main()
{
        int n,third,i,first=0,second=1;
        printf("Enter the number till which you want to print Fibonacci series:");
        scanf("%d",&n);
        printf("The Fibonacci Series is:");
            if (n>=1)
            {
                printf(" %d ",first);
            }
            if (n>=2)
            {
                printf("%d ",second);
            }
            for(i=3;i<=n;i++)
                {
                    third=first+second;
                    printf("%d ",third);
                    first=second;
                    second=third;
                }
            return 0;
}


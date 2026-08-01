#include<stdio.h>
int main()
{
    int n ,sum=0;
    int i;
    printf("Enter the number till where you want series to get print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("The sum of n Natural Numbers is %d ",sum);
    return 0;
}

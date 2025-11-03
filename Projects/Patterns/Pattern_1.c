//Pattern_1
#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the Number of lines you want in the Pattern:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("\n ");
        for(j=1;j<=i;j++)

            printf("* ");
    }
    return 0;
}

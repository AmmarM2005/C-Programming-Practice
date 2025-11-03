//Pattern_2 (Triangle)
#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the Number of lines you want in the Pattern:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++)
        {
            //Prints Spaces
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            //Prints Stars
            printf("*");
        }
        printf("\n");

    }
    printf("\nTHANK YOU\n");
    return 0;
}


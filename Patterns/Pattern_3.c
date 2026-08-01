//Pattern_3 (Inverted Triangle)
#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the Number of lines you want in the Pattern:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {

        for(int k=0;k<i;k++)
        {
            //Prints Spaces
            printf(" ");
        }
        for(int j=1;j<=2*(N-i)-1;j++)
        {
            //Prints Stars
            printf("*");
        }
        printf("\n");
    }
    printf("\nTHANK YOU\n");
    return 0;
}

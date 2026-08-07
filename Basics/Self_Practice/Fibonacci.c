//Making Fibonacci Sequence using Loop Commands
#include <stdio.h>

int main()
{
    int N, first = 0, second = 1, third, i;

    printf("Enter the Value of N: ");
    scanf("%d", &N);

    if (N == 1)
    {
        printf("%d", first);
    }
    else if (N == 2)
    {
        printf("%d %d", first, second);
    }
    else
    {
        printf("%d %d ", first, second);

        for (i = 3; i <= N; i++)
        {
            third = first + second;
            printf("%d ", third);

            first = second;
            second = third;
        }
    }

    return 0;
}

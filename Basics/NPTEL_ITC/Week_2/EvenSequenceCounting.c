#include <stdio.h>

int main()
{
    int N, i = 1, num;
    int count_current = 0, count_max = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (i <= N)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            count_current++;

            if (count_current > count_max)
            {
                count_max = count_current;
            }
        }
        else
        {
            count_current = 0;
        }

        i++;
    }

    printf("The maximum number of consecutive even numbers in the series is %d\n", count_max);
    return 0;
}
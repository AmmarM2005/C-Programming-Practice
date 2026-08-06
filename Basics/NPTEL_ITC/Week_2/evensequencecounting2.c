#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int num;
    int count_current = 0;
    int count_max = 0;

    for (int i = 0; i < N; i++)
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
    }

    printf("%d", count_max);

    return 0;
}
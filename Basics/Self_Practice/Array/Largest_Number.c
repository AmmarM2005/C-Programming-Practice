// Program: Find the largest element in an array

#include <stdio.h>

int main()
{
    int numbers[5];
    int max;

    // Input
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Assume the first element is the maximum
    max = numbers[0];

    // Compare remaining elements with max
    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}
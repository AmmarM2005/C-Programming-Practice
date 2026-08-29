// Program: Read 5 integers into an array and print them

#include <stdio.h>

int main()
{
    int numbers[5];

    // Input
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Output
    printf("\nArray elements:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
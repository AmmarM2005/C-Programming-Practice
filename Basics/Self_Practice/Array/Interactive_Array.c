#include <stdio.h>
int main()
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nArray elements:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
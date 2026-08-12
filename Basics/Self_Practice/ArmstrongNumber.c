// Program to check whether a number is an Armstrong number

#include <stdio.h>

int main()
{
    int num, cnum, digit;
    int sum = 0, count = 0;
    int power, i;

    printf("Enter the Number: ");
    scanf("%d", &num);

    // Keep a copy of the original number
    cnum = num;

    // Count the number of digits
    while (cnum > 0)
    {
        cnum = cnum / 10;
        count = count + 1;
    }

    // Reset cnum to the original number
    cnum = num;

    // Extract digits and calculate their powers
    while (cnum > 0)
    {
        digit = cnum % 10;

        power = 1;

        for (i = 0; i < count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        cnum = cnum / 10;
    }

    // Compare the calculated sum with the original number
    if (sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

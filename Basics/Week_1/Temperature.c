#include<stdio.h>
int main()
{
    float F,C;
    printf("The Temperature in Celsius is:");
    scanf("%f",&C);
    F=(C*1.8)+32;
    printf("The Temperature in Fahrenheit is: %.2f",F);
    return 0;
}

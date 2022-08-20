/*Author: Shubham Kumar Singh
Purpose of program: C program to find maximum between numbers using conditional operators.
Date: 20 August 2022 */

#include <stdio.h>
int main()
{
    int num1, num2, num3, max;

    printf("\nEnter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;

    printf("Maximum between %d %d and %d is %d", num1, num2, num3, max);

    return 0;
}

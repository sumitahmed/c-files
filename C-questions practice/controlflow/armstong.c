/*
Definition of Armstrong Numbers: An Armstrong number, also known as a narcissistic number, is a special type of number in mathematics. These numbers have a unique property: When you take each digit in the number, raise it to the power of the total number of digits, and add them up, you get the original number itself.
Count the digits: 153 has 3 digits.
Raise each digit to the power of 3 (since there are 3 digits):
(1^3 = 1)
(5^3 = 125)
(3^3 = 27)
*/
/*Wap to identify one user given positive integer is Armstrong no or not*/
#include <stdio.h>

int main()
{
    int n, temp, c = 0, rem, i, p, s = 0;

    // Prompt the user to enter a number
    printf("Enter the number:\n");
    scanf("%d", &n);
    temp = n;

    // Calculate the number of digits in the input number
    while (n != 0)
    {
        c++;
        n /= 10; // Divide n by 10 to remove the last digit
    }

    // Reset n to its original value
    n = temp;

    // Calculate the sum of the digits raised to the power of the total number of digits
    while (n != 0)
    {
        rem = n % 10; // Get the last digit
        p = 1;
        for (i = 1; i <= c; i++)
        {
            p *= rem; // Multiply p by the current digit
        }
        s += p; // Add the result to the total sum
        n /= 10; // Move to the next digit
    }

    // Check if the original number is an Armstrong number
    if (temp == s)
    {
        printf("\nArmstrong number:"); // If true, print this message
    }
    else
    {
        printf("no"); // Otherwise, print this message
    }

    return 0;
}

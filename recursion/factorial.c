#include <stdio.h>

int factorial(int number) // Function prototype
{
    if (number == 1 || number == 0)//base case
    {
        return 1;
    }
    else{
        return (number * factorial(number - 1));//recursive case &// call of the function
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    
    return 0;

}

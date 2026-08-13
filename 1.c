#include<stdio.h>

int main()
{
    // Variable declaration and initialization
    int num = 8;      // Number whose factorial is to be calculated
    int i = 1;        // Loop counter
    int fact = 1;     // Variable to store factorial result

    /*
        Factorial Formula:

        n! = 1 × 2 × 3 × ... × n

        Example:
        5! = 1 × 2 × 3 × 4 × 5
           = 120
    */

    // Repeat until i becomes greater than num
    while(i <= num)
    {
        // Multiply current value of fact by i
        fact = fact * i;

        // Move to the next number
        i++;
    }

    // Display the factorial
    printf("%d! = %d\n", num, fact);

    // Return 0 indicates successful execution
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    float result;

    printf("Enter the two number:  ");
    scanf("%f%f", &x, &y);

    if (y != 0)
    {
        result = x / y;
        printf("Result = \n%.2f\n", result);
    }
    else
    {
        printf("Cannot divide by 0");
    }

    printf("\nDone");
    return 0;
}

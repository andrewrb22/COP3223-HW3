#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120)
        printf("Invalid Age");
    else
        printf("Thank you, correct input");
    printf("Done");
    return 0;
}

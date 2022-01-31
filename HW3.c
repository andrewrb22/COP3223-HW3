#include <stdio.h>
#include <stdlib.h>


int Lowest(int a, int b, int c)
{
    // if  a is lowest 
    if(a<=b && a<=c)
        return a;
    // if b is lowest 
    else if(b<=a && b<=c)
        return b;
    // c is lowest 
    else 
        return c;
}
int highest(int a, int b, int c)
{
    // if a is highest
    if(a>=b && a>=c)
        return a;
    // if b is highest
    else if(b>=a && b>=c)
        return b;
    // c is highest
    else 
        return c;
}

int main()
{
int a,b,c;
char choice;

    printf("Enter your three integers: ");

    scanf("%d %d %d",&a,&b,&c);


    printf("You have entered the numbers: %d, %d, %d \n", a,b,c);
 
    printf("\n\nChoose one of the options:\n");
    printf("\tA - Print the lowest number entered\n\tB - Print the highest number entered");
    printf("\n\tC - Print whether the first number entered is an even or odd number");
    printf("\n\tD - print the division of third number entered by the sum of first two numbers entered");
    printf("\nMake your selection: ");
    scanf(" %c",&choice);

  switch (choice)
    {
        // if a is the choice
        case 'a':
        // call lowest()
                printf("Lowest number: %d",Lowest(a,b,c));
                break;
        case 'b':
        // if choice is  b 
        // call highest()
                printf("highest number: %d",highest(a,b,c));
                break;
        case 'c':
        // if even 
                if(a%2==0)
                    printf("%d is even.",a);
                // if odd 
                else 
                    printf("%d is odd.",a);
                break;
        case 'd':
        // if denominator is 0 
                if((a+b)==0)
                    printf("Error!!Division by 0 ");
                else
                // c divided by sum of a and b 
                    printf("%d divided by %d is %.2f ",c,(a+b),(float)c/(a+b));
                break;
        default: printf("Error!!");
    };

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;

printf("Enter one of this options:\n");
printf(" '1' to display Africa\n");
printf(" '2' to display America\n");
printf(" '3' to display Europa\n");
printf(" '4' to display Asia\n");
printf(" '5' to display Austrlia\n");
printf("Enter your selection:");
scanf("%c", &choice);

//    if(choice == '1') printf("Africa\n");
//    else if(choice == '2') printf("America\n");
//    else if(choice == '3') printf("Europa\n");
//    else if(choice == '4') printf("Asia\n");
//    else if(choice == '5') printf("Australia\n");
//    else printf("Invalid choice");

switch (choice){
    case '1': printf("\tAfrica\n") ;
    break;

    case '2': printf("\tAmerica\n");
    break;
    case '3': printf("\tEuropa\n");
    break;

    case '4': printf("\tAsia\n");
    break;
    case '5': printf("\tAustralia\n");
    break;

default: printf("Invalid selection");
}

    return 0;
}

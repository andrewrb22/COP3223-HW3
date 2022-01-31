#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    char letterGrade = 'x';

    printf("Enter your score:");
    scanf("%d", &score);

    if (score >= 0 && score <= 100)
    {
        if (score >= 90) letterGrade = 'A';
        if (score >= 80 && score< 90) letterGrade = 'B';
        if (score >= 70 && score< 80) letterGrade = 'C';
        if (score >= 60 && score< 70) letterGrade = 'D';
        if(score < 60 ) letterGrade = 'F';
    }

    if (letterGrade == 'X')  printf("Invalid Score\n");
    else  printf("You earned the grade of %c", letterGrade);

    return 0;
}

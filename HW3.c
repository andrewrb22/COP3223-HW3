#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    char letterGrade = 'x';

    printf("Enter your score:");
    scanf("%d", score);

    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
            letterGrade = "A";
        else if (score >= 80)
            letterGrade = "B";
        else if (score >= 70)
            letterGrade = "C";
        else if (score >= 60)
            letterGrade = "D";
        else
            letterGrade = "F";
    }
    if (letterGrade == "x")
        printf("Invalid Score\n");
    else
        printf("You earned the grade of %c\n", letterGrade);

    return 0;
}

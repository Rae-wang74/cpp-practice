#include <stdio.h>

int main()
{
    int score;
    double gpa;

    scanf("%d", &score);

    if (score >= 90)
        gpa = 4.0;
    else if (score >= 86)
        gpa = 3.7;
    else if (score >= 83)
        gpa = 3.3;
    else if (score >= 80)
        gpa = 3.0;
    else if (score >= 76)
        gpa = 2.7;
    else if (score >= 73)
        gpa = 2.3;
    else if (score >= 70)
        gpa = 2.0;
    else if (score >= 66)
        gpa = 1.7;
    else if (score >= 63)
        gpa = 1.3;
    else if (score >= 60)
        gpa = 1.0;
    else
        gpa = 0;

    if (gpa == 0)
        printf("0");
    else
        printf("%.1f", gpa);

    return 0;
}
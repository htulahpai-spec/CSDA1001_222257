#include <stdio.h>

char grade(int marks)
{
    if (marks >= 80)
        return 'A';
    else if (marks >= 70)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 50)
        return 'D';
    else
        return 'F';
}

int main()
{
    int marks;
    char g;

    printf("Enter marks: ");
    scanf("%d", &marks);

 g = grade(marks);

    printf("Grade = %c\n", g);

    return 0;
}

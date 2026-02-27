#include <stdio.h>

int is_leap(int year)
{
    return (year%4==0 && year%100!=0) || year%400==0;
}

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if(is_leap(year))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

    return 0;
}

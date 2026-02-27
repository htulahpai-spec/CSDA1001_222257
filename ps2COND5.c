#include <stdio.h>

int ticket_price(int age, int student)
{
    int price;

    if(age < 12)
        price = 50;

    else if(age <= 60)
    {
        if(student == 1)
            price = 80;
        else
            price = 100;
    }

    else
        price = 70;

    return price;
}

int main()
{
    int age, student;

    printf("Enter age: ");
    scanf("%d",&age);

    printf("Student? (1=yes 0=no): ");
    scanf("%d",&student);

    printf("Ticket Price = %d\n", ticket_price(age,student));

    return 0;
}

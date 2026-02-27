#include <stdio.h>

int sign(int n)
{
    if(n > 0)
        return 1;
    else if(n < 0)
        return -1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(sign(n) == 1)
        printf("Positive\n");
    else if(sign(n) == -1)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;
}

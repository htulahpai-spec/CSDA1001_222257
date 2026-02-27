#include <stdio.h>
int sum_array(int arr[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int n, i, sum;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = sum_array(arr, n);
    average = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

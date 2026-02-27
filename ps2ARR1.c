#include <stdio.h>

void input_array(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void print_array(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()

{
    int arr[100];
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    input_array(arr, n);

    print_array(arr, n);

    return 0;
}

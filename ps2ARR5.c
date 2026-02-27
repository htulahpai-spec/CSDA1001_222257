#include <stdio.h>
#include <stdbool.h>
bool is_palindrome(int arr[], int len) {
    int i = 0, j = len - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int n, temp, len = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not Palindrome\n");
        return 0;
    }

    temp = n;

    if (temp == 0) {
        len = 1;
    } else {
        while (temp > 0) {
            temp = temp / 10;
            len++;
        }
    }

    int arr[len];

    temp = n;
    for (int i = len - 1; i >= 0; i--) {
        arr[i] = temp % 10;
        temp = temp / 10;
    }

    if (is_palindrome(arr, len)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}

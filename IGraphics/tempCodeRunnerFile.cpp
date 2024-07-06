#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the number of left shifts (x): ");
    scanf("%d", &x);

    // Perform left shifts in-place
    for (int i = 0; i < n; i++) {
        int newIndex = (i + x) % n;
        printf("%d ", arr[newIndex]);
    }

    return 0;
}

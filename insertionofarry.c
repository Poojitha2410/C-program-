#include <stdio.h>
void main() {
    int arr[100], n, value, i;
printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
 printf("Enter sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 printf("Enter the value to insert: ");
    scanf("%d", &value);
for (i = n - 1; i >= 0 && arr[i] > value; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = value;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

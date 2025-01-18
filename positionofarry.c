#include <stdio.h>
void main() {
    int arr[100], n, pos;
printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
 printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
if (pos < 1 || pos > n)
{
        printf("Invalid position!\n");
       }
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
n--;
 printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

#include <stdio.h>
void main() 
{
    int arr[100], n, d, i, j, temp;
printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);
d = d % n;
 for (i = 0; i < d; i++) {
        temp = arr[0];
        for (j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
 printf("Array after rotating by %d positions:\n", d);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    }

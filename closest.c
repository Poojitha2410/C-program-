#include <stdio.h>
#include <stdlib.h>
void main() {
    int arr[100], n, i, j;
    int closest_sum = 0, diff = 1000000; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            int current_diff = abs(10 - sum);
              if (current_diff < diff)
              {
                diff = current_diff;
                closest_sum = sum;
            }
        }
    }
    printf("The closest sum to 10 is: %d\n", closest_sum);
}

#include <stdio.h>
void main() {
    int a1, a2, n, rollNo;
    printf("Enter roll number of first student (a1): ");
    scanf("%d", &a1);
    printf("Enter roll number of second student (a2): ");
    scanf("%d", &a2);
    printf("Enter the position of the student (n): ");
    scanf("%d", &n);
    int d = a2 - a1;
    rollNo = a1 + (n - 1) * d;
     printf("The roll number of the %dth student is: %d\n", n, rollNo);
 }

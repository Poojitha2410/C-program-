#include <stdio.h>
void main() {
    int num, i, remainder, sum = 0,temp;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    temp = num;
while (num>0) {
       remainder = num % 10;
        sum = sum + sum;
       num = num/ 10;
    }
 if (temp==sum)
 {
        printf("%d is an Armstrong number.", num);
 }
    else
        printf("%d is not an Armstrong number.", num);
}

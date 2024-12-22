#include <stdio.h>
void main() {
    int number, rem, sum = 0;
 printf("Enter an integer: ");
    scanf("%d", &number);
 while (number>0) 
 {
        rem = number % 10;  
        sum = sum+rem;         
        number = number/10;         
    }
    printf("Sum of the digits: %d", sum);
    
}

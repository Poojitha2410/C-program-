#include <stdio.h>
void main() 
{
    int number, rem = 0, rev = 0;
 printf("Enter an integer: ");
    scanf("%d", &number);
 while (number>0) 
 {
        rem = number % 10;  
        rev = rev*10+rem;         
        number = number/10;         
    }
    printf("Sum of the digits: %d", rev);
    
}

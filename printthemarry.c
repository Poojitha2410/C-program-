#include <stdio.h>
void main() {
    int a[10],i,n;
 printf("Enter size: ");
    scanf("%d", &n);
printf("Enter elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
for ( i = 0; i < n; i++) 
{
        printf("%d \t ", a[i]);
    }
    
}

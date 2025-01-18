#include <stdio.h>
void main()
{
    int a[10],i,n,max,min;
 printf("Enter size: ");
    scanf("%d", &n);
printf("Enter elements:\n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
   max=a[0];min=a[0]; 
for ( i = 1; i < n; ++i) 
{
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
} 
}

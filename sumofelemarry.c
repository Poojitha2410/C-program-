 #include <stdio.h>
void main() {
    int a[10],i,n,sum=0;
 printf("Enter size: ");
    scanf("%d", &n);
printf("Enter elements:\n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    
for ( i = 0; i < n; ++i) 
{
    sum=sum+a[i];
}
        printf("the sum of the element of the array is %d",sum);
    }

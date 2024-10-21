#include <stdio.h>
void main()
{
    int a,b,c,large;
    printf("enter the largest number");
    scanf("%d%d%d",&a,&b,&c);
    large=(a>b&&a>c)?a:(b>c?b:c);
    {
        printf("%d is largest",large);
    }
}

#include<stdio.h>
void main()
{
    int i,j,n=1;
    for(i=0;i<=5;++i)
    {
        for(j=5;j>=i;--j)
        {
            printf("%d",j);
        }
        printf("\n");
        }
}

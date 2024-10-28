#include <stdio.h>
void main()
{
int a,b;
char op;
printf("enter a,b values and operatr");
scanf("%d%d %c",&a,&b,&op);
switch(op)
{
    case'+':printf("The addition is %d",a+b);
    break;
    case'-':printf("The subtraction is %d",a-b);
    break;
    case'*':printf("The multipication is %d",a*b);
    break;
    case'%':printf("The remainder is %d",a%b);
    break;
    case'/':printf("The coefficient is %d",a/b);
    break;
    default:printf("invaild output");
    break;
}
}

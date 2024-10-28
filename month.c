#include <stdio.h>
void main()
{
int a;
printf("enter a value");
scanf("%d",&a);
switch(a)
{
    case 1:printf("january ");
    break;
    case 2:printf("fed");
    break;
    case 3:printf("march");
    break;
    case 4:printf("april");
    break;
    case 5:printf("may");
    break;
    case 6:printf("june");
    break;
    case 7:printf("july");
    break;
    case 8:printf("august");
    break;
    case 9:printf("sep");
    break;
    case 10:printf("oct");
    break;
    case 11:printf("nov");
    break;
    case 12:printf("dec");
    break;
    default:printf("invaild number");
    break;
}
}

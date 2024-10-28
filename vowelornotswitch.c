#include <stdio.h>
void main()
{
int p;
printf("enter character");
scanf("%c",&p);
switch(p)
{
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':printf("%c is a vowel",p);
    break;
    default:printf("%c is a consonant",p);
    break;
}
}

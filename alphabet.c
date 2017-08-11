#include<stdio.h>
int main()
{
int ch;
printf("Enter the character");
scanf("%c",&ch);
if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
{
printf("The character is an alphabet",ch);
}
else
{
printf("The character is not an alphabet",ch);
}
return 0;
}

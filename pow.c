#include<stdio.h>
int main()
{
int base, exponent;
long long result=1;
printf(" enter the base:\n");
scanf("%d",&base);
printf("Enter the exponent:\n");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("Answer=%lld",result);
return 0;
}

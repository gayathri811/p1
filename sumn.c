#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the positive integer\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum of natural numbers=%d",sum);
return 0;
}

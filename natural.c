#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the positive integer\n");
scanf("%d",&n);
for(i=0;i<n;++i)
{
sum+=i;
}
printf("sum=%d",sum);
return 0;
}

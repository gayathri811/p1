#include<stdio.h>
int main()
{
int num, count=0;
printf("Enter the number:\n");
scanf("%d",&num);
while(num)
{
num=num/10;
count++;
}
printf("Total digits is :%d",count);
return 0;
}

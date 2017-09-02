#include<stdio.h>
int main()
{
int i,j,a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
j=i*a;
printf("%d * %d = %d",&i,&a,&j);
}
return 0;
}

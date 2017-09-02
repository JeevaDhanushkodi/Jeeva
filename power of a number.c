#include<stdio.h>
int main()
{
long long int j=1;
int a,b;
scanf("%d",&a);
scanf("%d",&b);
while(b!=0)
{
j*=a;
--b;
}
printf("%lld",j);
return 0;
}

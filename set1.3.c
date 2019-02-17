#include <stdio.h>

int main()
{
    int n,remainder,reverse=0;
int result;
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
printf("\n%d",reverse);
    return 0;
}

#include <stdio.h>

int main()
{
    int a,n, fact=1;
	printf("enter a number");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	fact=fact*a;
	printf("factrial %d",fact);
    return 0;
}

#include <stdio.h>

int main()
{
     int n,a[10],k,i,s;
    printf("\n Enter a number:");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        s=a[i];
        a[i]=a[i+1];
        a[i+1]=s;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

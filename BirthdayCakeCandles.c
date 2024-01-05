#include<stdio.h>
int main()
{
    int n,a[100000],max=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            c++;
        }
    }
    printf("%d",c);
}
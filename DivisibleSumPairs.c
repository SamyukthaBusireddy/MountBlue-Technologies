#include<stdio.h>
int main()
{
    int n,a[100],k,c=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
    {
        if((a[i]+a[j])%k==0)
        {
            c++;
        }
    }
    }
    printf("%d",c);
}
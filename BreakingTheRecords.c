#include<stdio.h>
int main()
{
    int n,a[1000],c=0,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  int  max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            c++;
        } 
    }
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            d++;
        } 
    }
    printf("%d %d",c,d);
    
}
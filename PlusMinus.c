#include<stdio.h>
int main()
{
    int a[100],p=0,neg=0,z=0,n;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
        for(int i=0;i<n;i++)
    {
    if(a[i]>0)
    {
        p++;
    }
            if(a[i]<0)
    {
        neg++;
    }
            if(a[i]==0)
    {
        z++;
    }
    }  
    float s=(float)p/n,c=(float)neg/n,b=(float)z/n;
    printf("%f\n",s);
     printf("%f\n",c);
     printf("%f\n",b);
}
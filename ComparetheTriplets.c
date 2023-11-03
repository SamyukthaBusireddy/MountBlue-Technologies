#include<stdio.h>
int main()
{
    int a[3],b[3];
    int c=0,d=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<=i;j++)
        {
            if(a[i]>b[j])
            {
                c++;
            }
            if(a[i]<b[j])
            {
                d++;
            }
        }
    }
    printf("%d %d",c,d);
}
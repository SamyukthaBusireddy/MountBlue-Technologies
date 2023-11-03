#include<stdio.h>
int main()
{
     int n;
    int a[10];
    long int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%li",sum);
}
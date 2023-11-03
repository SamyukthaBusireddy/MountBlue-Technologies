#include<stdio.h>
#include<string.h>
int main(){
    char s[100000];
    int k=1;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            k++;
        }
    }
    printf("%d",k);
}
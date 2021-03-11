#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    char x[n];
    int a[20];
    for(i=0;i<20;i++)
    {
        a[i]=0;
    }
    char *p;
    scanf("%[^\n]s",a);
    p=strtok(a," ");
    i=0;
    while(p!=NULL)
    {
        if(!(strcmp(p,"+")))
        {
            a[i-2]+=a[i-1];
            i--;
        }
        else if(!(strcmp(p,"-")))
        {
            a[i-2]-=a[i-1];
            i--;
        }
        else if(!(strcmp(p,"*")))
        {
            a[i-2]*=a[i-1];
            i--;
        }
    }



    return 0;
}

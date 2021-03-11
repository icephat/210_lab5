#include<stdio.h>
int main()
{
    int n,a,x,i,j,k;
    scanf("%d",&n);

    if(n%2==0)
    {
        n--;
        a++;
        x=((n+a)/2)-1;
    }
    else
    {
        x=((n+a)/2);
    }





    return 0;
}

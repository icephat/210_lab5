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

    for(i=0;i<(n+a)/2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n/2)-i||j==(n/2)+i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }


    for(i=0;i<=x;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i||j==(n-1)-i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }



    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    if(n%2!=0)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("_");
            }
            printf("\n");
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                printf("_");
            }
            printf("\n");
        }
    }



    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n/2;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }





    return 0;
}

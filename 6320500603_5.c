#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    int a[n][n];
    scanf("%d",&m);
    int b[m][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }




    return 0;
}

#include<stdio.h>
int main()
{
    int a[20];
    int i,j,k=1,n;
    scanf("%d",&n);

    for(i=1;;i++)
    {
        if(i%2==0||i%3==0||i%5==0)
        {
            if(i==1)
            {
                k++;
            }
            else
            {
                k++;
            }
        }
        if(i/2==7)
        {
            i++;
        }
        if(k==n)
        {
            break;
        }
    }


    printf("%d",i);


    return 0;
}

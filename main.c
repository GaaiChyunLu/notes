#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    int n,i,j,flag;
    scanf("%d",&n);
    int num[n];
    for (i=0; i<n; i++)
    {
        scanf("%d,",&num[i]);
    }
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (num[i]>num[j])
            {
                flag=num[j];
                num[j]=num[i];
                num[i]=flag;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%d\n",num[i]);
    }
    printf("\n");
}

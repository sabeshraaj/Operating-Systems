//First Fit - Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p[]={115,500,358,200,375};
    int b[]={300,600,350,200,750,125};
    int d[]={300,600,350,200,750,125};
    int a[]={-1,-1,-1,-1,-1};
    int i,j,m,n;
    n=sizeof(p)/sizeof(p[0]);
    m=sizeof(b)/sizeof(b[0]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(p[i]<=b[j])
            {
                b[j]-=p[i];
                a[i]=d[j];
                break;
            }
        }
    }
    printf("FIRST FIT - DMA\n");
    printf("Pno\tPSize\tBSize\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t %d\t ",i+1,p[i],a[i]);
        printf("\n");
    }
}

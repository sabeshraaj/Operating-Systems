//Best Fit - Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p[]={115,500,358,200,375};
    int b[]={300,600,350,200,750,125};
    int d[]={300,600,350,200,750,125};
    int a[]={-1,-1,-1,-1,-1};
    int i,j,m,n,min,ind;
    n=sizeof(p)/sizeof(p[0]);
    m=sizeof(b)/sizeof(b[0]);
    for(i=0;i<n;i++)
    {
        min=1000;
        ind=-1;
        for(j=0;j<m;j++)
        {
            if(p[i]<=b[j]&&b[j]<min)
            {
                min=b[j];
                ind=j;
            }
        }
        if(ind!=-1)
        {
            b[ind]-=p[i];
            a[i]=d[ind];
        }
    }
    printf("BEST FIT - DMA\n");
    printf("PNo\tPSize\tBSize\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t %d\t ",i+1,p[i],a[i]);
        printf("\n");
    }
}

//worst fit - dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p[]={115,500,358,200,375};
    int b[]={300,600,350,200,750,125};
    int d[]={300,600,350,200,750,125};
    int a[]={-1,-1,-1,-1,-1};
    int i,j,m,n,max,ind;
    n=sizeof(p)/sizeof(p[0]);
    m=sizeof(b)/sizeof(b[0]);
    for(i=0;i<n;i++)
    {
        ind=-1;
        max=-1000;
        for(j=0;j<m;j++)
        {
            if(p[i]<=b[j]&&b[j]>max)
            {
                max=b[j];
                ind=j;
            }
        }
        if(ind!=-1)
        {
            b[ind]-=p[i];
            a[i]=d[ind];
        }
    }
    printf("Worst Fit - DMA\n");
    printf("Pno\tPsize\tBsize\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t %d\t",i+1,p[i],a[i]);
        printf("\n");
    }
}

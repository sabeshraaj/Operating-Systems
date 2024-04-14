//next fit - dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,i,j,ind=0,lastind=0;
    int p[] = {115,500,358,200,375};
    int b[] = {300,600,350,200,750,125};
    int a[]={-1,-1,-1,-1,-1,-1};
    int d[]={300,600,350,200,750,125};
    n=sizeof(p)/sizeof(p[0]);
    m=sizeof(b)/sizeof(b[0]);
    for(i=0;i<n;i++)
    {
        int curind=lastind;
        do
        {
            if(b[curind]>=p[i])
            {
                b[curind]-=p[i];
                a[i]=d[curind];
                lastind=curind;
                break;
            }
            curind=(curind+1)%m;
        }
        while(curind!=lastind);
    }
    printf("NEXTFIT - DMA\n");
    printf("Pno\tPsize\tBsize\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t %d\t ",i+1,p[i],a[i]);
        printf("\n");
    }
}

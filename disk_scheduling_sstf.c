//disk scheduling sstf in c
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
#include<math.h>
int main()
{
    int a[8] = { 98,183,37,122,14,124,65,67 };
    int cur = 53;
    int vis[8];
    int sum=0;
    int i,j;
    for(i=0;i<8;i++)
    {
        vis[i]=-1;
    }
    printf("seek sequence is \n");
    for(i=0;i<8;i++)
    {
        int min=1000;
        int ind=-1;
        for(j=0;j<8;j++)
        {
            if(vis[j]==-1)
            {
                int dif=fabs(cur-a[j]);
                if(dif<min)
                {
                    min=dif;
                    ind=j;
                }
            }
        }
        sum+=min;
        cur=a[ind];
        vis[ind]=0;
        printf("%d\t",a[ind]);
    }
    printf("\nseek operation is %d ",sum);
    
}

//srjf with remaining time in c
#include<stdio.h>
int main()
{
    int at[10],bt[10],ct[10],wt[10],rt[10],tat[10];
    int i,j,tim;
    int temp[10];
    int n;
    printf("enter the number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("enter at, bt ");
       scanf("%d %d",&at[i],&bt[i]);
       temp[i]=bt[i];
    }

   int cnt=0;
   
    for(tim=0;cnt<n;tim++)
    {
        int min=1000;
        int ind=0;
        for(i=0;i<n;i++)
        {
            if(bt[i]>0&&at[i]<=tim&&bt[i]<min)
            {
                min=bt[i];
                ind=i;
            }
        }
        bt[ind]--;
        if(bt[ind]==temp[ind]-1){rt[ind]=tim-at[ind];}
        if(bt[ind]==0)
        {
            cnt++;
            int end=tim+1;
            ct[ind]=end;
            tat[ind]=ct[ind]-at[ind];
            wt[ind]=tat[ind]-temp[ind];
        }
    }
    printf("\nPid\t AT\t BT\t CT\t WT\t TT\t RT\t \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t\n",i+1,at[i],temp[i],ct[i],wt[i],tat[i],rt[i]);
    }
}

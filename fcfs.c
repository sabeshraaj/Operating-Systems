//fcfs code in c
#include<stdio.h>
int main(void){
    int pid[10];
    int at[10];
    int bt[10];
    int wt[10],twt=0;
    int rt[10],trt=0;
    int tat[10],ttat=0;
    int ct[10],tct=0;
    int n;
    double abt=0,awt=0,art=0,atat=0,act=0;
    printf("enter the number of processes:");
    scanf("%d",&n);
    //enter the pid,arrival time and burst time
    for(int i=0;i<n;i++){
        printf("enter pid,at,bt for p%d:",i+1);
        scanf("%d %d %d",&pid[i],&at[i],&bt[i]);
    }
    // fcfs logic:
    int temp,temp1,temp2=0;
    for(int k=0;k<n;k++){
        for(int i=0;i<n-1;i++){
            if(at[i]>at[i+1]){
                //shifting the arrival times
                temp=at[i];
                at[i]=at[i+1];
                at[i+1]=temp;
                //shifting the burst times
                temp1=bt[i];
                bt[i]=bt[i+1];
                bt[i+1]=temp1;
                //shifitng pid's
                temp2=pid[i];
                pid[i]=pid[i+1];
                pid[i+1]=temp2;
            }
        }
    }
    // calculating the completion time and average completeion time
    for(int i=0;i<n;i++){
        if(i>=1){
            ct[i]=ct[i-1]+bt[i];
        }
        else{
            ct[i]=at[i]+bt[i];
        }
        tct=tct+ct[i];
    }
    act=(double)tct/n;
    //calculating the turnaround time , avg tat and total tat
    for(int i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        ttat+=tat[i];
    }
    atat=(double)ttat/n;
    //calculating the total and average waiting time
    for(int i=0;i<n;i++){
        wt[i]=tat[i]-bt[i];
        twt+=wt[i];
    }
    awt=(double)twt/n;
    //calculating the total and average response time
    for(int i=0;i<n;i++){
        rt[i]=ct[i]-bt[i];
        trt=trt+rt[i];
    }
    art=(double)trt/n;
    printf("\n");
    //display the calculated values
    printf("Pid\t AT\t BT\t CT\t TAT\t WT\t RT\t");
    for(int i=0;i<n;i++){
        printf("\n%d\t %d\t %d\t %d\t %d\t     %d\t %d\t\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i],rt[i]);
    }
    printf("\nthe average completion time is %f\n",act);
    printf("\nthe average turn around  time is %f\n",atat);
    printf("\nthe average waiting time is %f\n",awt);
    printf("\nthe average response time is %f\n",art);
    printf("\n");
    
}

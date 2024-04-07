//sjf scheduling in c
#include<stdio.h>
int main(){
    int pid[10];
    int at[10];
    int bt[10];
    int wt[10],twt=0;
    int rt[10],trt=0;
    int tat[10],ttat=0;
    int ct[10],tct=0;
    int n;
    double awt=0,art=0,atat=0,act=0;
    printf("enter the number of process:");
    scanf("%d",&n);
    //enter the details of the process:
    for(int i=0;i<n;i++){
        printf("Enter pid,at,bt for p%d",i+1);
        scanf("%d %d %d",&pid[i],&at[i],&bt[i]);
    }
    //sort the process on arrival time first in order to get the first process that enters the cpu
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
    //completion time for the first process alone
    for(int i=0;i<1;i++){
        ct[i]=at[i]+bt[i];
    }
    //sort based on burst time 
    int temp3,temp4,temp5=0;
    for(int z=0;z<n;z++){
        for(int i=1;i<n;i++){
            if(bt[i]>bt[i+1]){
                //shifting the arrival time
                temp3=at[i];
                at[i]=at[i+1];
                at[i+1]=temp3;
                //shifting the burst time
                temp4=bt[i];
                bt[i]=bt[i+1];
                bt[i+1]=temp4;
                //shifting the pid's
                temp5=pid[i];
                pid[i]=pid[i+1];
                pid[i+1]=temp5;
            }
        }
    }
    //calculating the completion time for the process
    for(int i=1;i<n;i++){
        ct[i]=ct[i-1]+bt[i];
        tct+=ct[i];
    }
    tct+=ct[0];
    act=tct/n;
    //calculatig the turnaroundtime fot the process
    for(int i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        ttat+=tat[i];
    }
    atat=ttat/n;
    //calculating the waiting time for the process
    for(int i=0;i<n;i++){
        wt[i]=tat[i]-bt[i];
        twt+=wt[i];
    }
    awt=twt/n;
    //calculatiing the response time
    for(int i=0;i<n;i++){
        rt[i]=ct[i]-bt[i];
        trt+=rt[i];
    }
    art=trt/n;
    //diplaying the calculated values
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

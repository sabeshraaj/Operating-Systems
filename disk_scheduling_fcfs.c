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
    int sum=0;
    int i;
    printf("seek sequence is \n");
    for(i=0;i<8;i++)
    {
        int diff=fabs(cur-a[i]);
        cur=a[i];
        sum+=diff;
        printf("%d\t",a[i]);
    }
    printf("\nseek operation is %d ",sum);
    
}

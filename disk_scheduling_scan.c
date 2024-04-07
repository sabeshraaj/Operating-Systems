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
    int i,j;
    int n=8;
    for(i=0;i<n;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    int ind=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>cur)
        {
            ind=i;
            break;
        }
    }
    printf("seek sequence is \n");
    int o=199;
    for(i=ind;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("%d\t",o);
    for(i=ind-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    sum+=199-cur+199-a[0];
    printf("\nseek operation is %d ",sum);
    
}

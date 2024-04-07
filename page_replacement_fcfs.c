#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
int main()
{
     int inc[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1};
     int pg=sizeof(inc)/sizeof(inc[0]);
     int fr=3;
     int temp[fr];
     int i,j,x,y,h;
     for(i=0;i<fr;i++)
     {
         temp[i]=-1;
     }
     int f=0;
     int pf=0;
     int occ=0;
     for(i=0;i<pg;i++)
     {
        f=0;
        for(j=0;j<fr;j++)
        {
            if(temp[j]==inc[i])
            {
                f=1;
                h++;
                pf--;
            }
        }
        pf++;
        if(f==0&&pf<=fr)
        {
            temp[pf-1]=inc[i];
        }
        else if(f==0)
        {
            temp[(pf-1)%fr]=inc[i];
        }
        for(int a=0;a<fr;a++)
        {
            if(temp[a]!=-1)
            {printf("%d\t",temp[a]);}
            else
            {
                printf("-\t");
            }
        }
        printf("\n");
     }
     printf("page hits:%d\n",h);
     printf("page fault:%d\n",pg-h);
}

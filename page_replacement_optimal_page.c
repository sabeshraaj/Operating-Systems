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
            }
        }
        if(f==0&&occ<fr)
        {
            temp[occ]=inc[i];
            occ++;
        }
        else if(f==0)
        {
            int ind=-1;
            int maxi=-1;
            for(x=0;x<fr;x++)
            {
                for(y=i+1;y<pg;y++)
                {
                    if(inc[y]==temp[x])
                    {
                        if(y>maxi){maxi=y;ind=x;}
                        break;
                    }
                }
                if(y==pg){ind=x;break;}
            }
            temp[ind]=inc[i];
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
     printf("page faults:%d\n",pg-h);
}

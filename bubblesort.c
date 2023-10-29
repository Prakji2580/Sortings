#include<stdio.h>
void main()
{
    char ar[10],t;
    int i=0,j;
    printf("enter 10 alphabet\n");
    for(i=0;i<10;i++)
    {
        printf("%d: ",i);   
        scanf("%c",&ar[i]);
        scanf("%c",&ar[i]);
    }

    for(i=0;i<10;i++)
    {
        
        for(j=0;j<=10-i-1;j++)
        {
            
            if((int)ar[j]>(int)ar[j+1])
            {
                
                t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }

        
    }
    for(i=0;i<10;i++)
    {
        printf("sorted array is=%c \n",ar[i]);
    }

}




//printf("sorted array is=%d\n",t);





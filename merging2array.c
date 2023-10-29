#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,t=0;
    printf("enter 10 number\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(j=0; j<10; j++)
        printf("\nsorted array is=%d",a[j]);
    

    printf("\nenter 10 number in array b\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    int c[20];
    for(i=0;i<20;i++)
    {
        if(i<10)
        {
            c[i]=a[i];
        }
        else 
            c[i]=b[i-10];
        
    }
       
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(c[j]>c[j+1])
            {
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
            }
        }
    }

    for(i=0;i<20;i++)
        printf("\n%d",c[i]) ;
}


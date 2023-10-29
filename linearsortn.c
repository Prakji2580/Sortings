#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter a number\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
int p=i;
int v=a[i];
for(j=i+1;j<n;j++)
{

    if(a[j]<v)
    {
        p=j;
        v=a[j];
    }

    int temp=v;
    a[p]=a[i];
    a[i]=v;
}
}
for(i=0;i<n;i++)
{
    printf("sorted array is =%d\n",a[i]);

}
}


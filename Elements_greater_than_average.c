#include<stdio.h>
int main()
{
    int n,arrsum=0,count=0;
    float avg=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arrsum=arrsum+arr[i];
    }
    avg=arrsum/n;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>=avg)
       {
           count++;
       }
    }
    printf("%d",count);
}    
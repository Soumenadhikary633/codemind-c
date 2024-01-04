#include<stdio.h>
int main()
{
    int n,count=0,z;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d
",&z);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==z)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}
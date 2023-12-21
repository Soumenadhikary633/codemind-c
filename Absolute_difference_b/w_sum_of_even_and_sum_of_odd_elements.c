#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    if(arr[i]%2==0)
    {
        sumeven=sumeven+arr[i];
    }
    else
    {
        sumodd=sumodd+arr[i];
    }
    if(sumeven>sumodd)
    {
        printf("%d",sumeven-sumodd);
    }
    else
    {
        printf("%d",sumodd-sumeven);
    }
}
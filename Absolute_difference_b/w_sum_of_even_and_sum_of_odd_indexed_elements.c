#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sume=0,sumo=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sume=sume+arr[i];
        }
        else
        {
            sumo=sumo+arr[i];
        }
    }
    printf("%d",sume-sumo);
}    
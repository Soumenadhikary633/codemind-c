#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float avg;
    avg=sum/n;
    
    int found=0;
    for(int i=0;i<n;i++)
    if(arr[i]==avg)
    {
        found=1;
    }
    if(found==1)
    {
        printf("True");
    }
    else{
        printf("False");
    }
    
}    
    
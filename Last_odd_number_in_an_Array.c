#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int lastodd=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            lastodd=i;
        }
    }
    if(lastodd!=1)
    {
        printf("%d",arr[lastodd]);
    }
}
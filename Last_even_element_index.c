#include<stdio.h>
int main()

{
      int n;
      scanf("%d",&n);
      int arr[n];
      int lasteven=-1;
      for(int i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      for(int i=0;i<n;i++)
      {
          if(arr[i]%2==0)
          {
              lasteven=i;
          }
      }
      if(lasteven!=-1)
      {
          printf("%d",lasteven);
      }
}      
      
      
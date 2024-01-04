#include<stdio.h>
int main()

{
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      int sodd=1;
      for(int i=0;i<n;i++)
      {
          if(arr[i]%2!=0 && i%2==0)
          {
              sodd=0;
          }
      }
      if(sodd==1)
      {
          printf("True");
      }
      else
      {
          printf("False");
      }
}
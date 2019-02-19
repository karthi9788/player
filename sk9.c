#include <stdio.h>

int main()
{
   int a,b,i,j,count=0,count1=0,temp;
   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++)
   {
       temp=i;
       count=0;
      for(j=2;j<=temp-1;j++) 
      {
          if(temp%j==0)
          {
              count++;
          }
      }
      if(count==0)
      {
          count1++;
          
      }
   }
   printf("%d",count1);
    return 0;
}

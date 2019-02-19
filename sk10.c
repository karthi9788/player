#include <stdio.h>

int main()
{
  char a[20],b[20];
  int i,count=0;
  scanf("%s %s",a,b);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]!=b[i])
      {
          count++;
      }
  }
  if(count==1)
  {
      printf("Yes");
      
  }
  else
  {
      printf("No");
  }
    return 0;
}

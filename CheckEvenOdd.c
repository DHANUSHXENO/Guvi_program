#include<stdio.h>

int maim()
{
  int n;
  printf("\n*** Check Even or Odd of given number ***");
  printf("\n Enter Number: ");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("\n Number is Even");
  }
  else
  {
    printf("\n Number is Odd");
  }
return 0;
}

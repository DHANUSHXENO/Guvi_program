#include<stdio.h>

int main()
{
  double n;
  printf("\n*** Checking Number Positive Negative or Zero***");
  printf("\n Enter the Number: ");
  scanf("%lf",&n);
  if(n>0)
  {
    printf("\n %lf is Positive Number",n);
  }
  else if(n<0)
  {
    printf("\n %lf is Negative Number",n);
  }
  else
  {
    printf("\n %lf is Zero Number",n);
  }
return 0;
}

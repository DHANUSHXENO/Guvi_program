#include<stdio.h>
main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n>0)
    printf("\n %d is Positive Number",n);
    else if(n<0)
    printf("\n %d is Negative Number",n);
    else
    printf("\n %d is Zero Number",n);
}

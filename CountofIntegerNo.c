#include<stdio.h>

int main()
{
    int n,count=0,t;
    printf("Enter Number: ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf("No. of Integer in %d : %d\n",t,count);
    return 0;
}

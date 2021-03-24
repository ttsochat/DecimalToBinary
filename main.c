#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,i=1,c;
    int long n=0;
    printf("Give decimal number.\n");
    scanf("%d",&a);
    if (a)
{
   while(a!=0)
    {
    if (a%2)
        {
        a/=2;
        n=n+i;
        }
    else if(!(a%2))
    {
        a/=2;
        n=n;
    }
        i=i*10;
    }
}
    printf("The binary number is %d",n);

        return 0;
}

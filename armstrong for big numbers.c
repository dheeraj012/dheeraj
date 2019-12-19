/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,r,sum=0,num,l=0;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        l++;
        n=n/10;
    }
    n=num;
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,1);
        n=n/10;
    }
    if(sum==num)
    printf("%d is a armstrong",num);
    else
    printf("%d is not a armstrong number ",num);
    return 0;
}

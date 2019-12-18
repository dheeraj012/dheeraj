/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if((n % 5==0) && (n % 11==0))
    {
        printf("it is divisible by 5 and 11");
    }
        else
        {
        printf("not divisible by 5 and 11");
    }
    return 0;
}

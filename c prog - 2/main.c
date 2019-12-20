/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n,rem,sum=0,i,f;
    printf("enter a number");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        f=1;
        for(i=1;i<=rem;i++)
        { f=f*i;}
        sum +=f;
        n=n/10;
    }
    if(sum==n1)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }

    return 0;
}

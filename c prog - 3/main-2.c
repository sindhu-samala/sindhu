/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //3+33+333+3333
    int s=0,i,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=(s*10)+3;
        printf("%d+",s);
        
    }    return 0;
}


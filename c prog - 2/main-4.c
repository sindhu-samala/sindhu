/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x=10;
    printf("%d\n",x);
    printf("%d\n",x++); // implicitly gets incremented(after printing x,it gets incremented) (x=11)
    printf("%d\n",++x); // (x=11) it gets incremented first and then value ptints (x=12)

    return 0;
}

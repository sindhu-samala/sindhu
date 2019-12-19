/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define start main
void start()
{
    int a,b,sum;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    sum=a+~b+1;
    printf("difference:%d",sum);


}

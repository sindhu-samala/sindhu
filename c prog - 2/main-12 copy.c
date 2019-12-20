/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%2d",&a);
    printf("%d",a/10-a%10);
    
}
/*
int a,r,r1;
printf("enter a number");
scanf("%2d",&a);
r=a%10;
r1=a/10;
if(r==r1)
{
    printf("0");
}
else
{
    printf("%d",r1-r);
}
return 0;
*/

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int op,a,b;
    printf("enter 2 values");
    scanf("%d%d",&a,&b);
    printf("choose an operation");
    printf("menu:1.add\n2.subtract\n3.divide\n4.multiply\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("sum=%d",a+b);
        break;
        case 2:
        printf("difference=%d",a-b);
        break;
        case 3:
        printf("division=%d",a/b);
        break;
        case 4:
        printf("multiplication=%d",a*b);
        break;
        default:
        printf("invalid");
        break;
    }
    return 0;
}

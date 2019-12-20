/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// accept height of a person and display following comments based on height//

#include <stdio.h>

int main()
{
    int h;
    printf("enter your height");
    scanf("%d",&h);
    if(h<=190)
    {
        if(h<150)
        {
            printf("dwarf");
        }
        else if(150<h<165)
        {
            printf("avg height");
        }
        else
        {
            printf("tall");
        }
    }    
    else
    {
        printf("abnormal height");
    }
    
    

    return 0;
}

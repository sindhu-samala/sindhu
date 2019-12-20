/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int a,n,sum=0,temp,r,temp1;
    
    printf("enter a number");
    scanf("%d",&a);
    temp=a;
    temp1=a;
    while(a!=0)
    {
        a=a/10;
        ++n;
    }
    
    while(temp1!=0)
        {
            r=temp1%10;
            sum=sum+pow(r,n);
            temp1=temp1/10;
        }
    if(temp==sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("invalid");
    }

    return 0;
}

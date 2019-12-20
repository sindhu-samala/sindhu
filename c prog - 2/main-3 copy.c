/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pin,bal=1000,m,d,x;
    printf("enter pin");
    scanf("%d",&pin);
    if(pin==true)
    {
        printf("menu:\n1.balance\n2.deposit\n3.withdraw\n4.exit\n");
        scanf("%d",&m);
        switch(m)
        
        case 1:
        printf("balance=%d",bal);
        break;
        case 2:
        printf("enter amount to be deposited");
        scanf("%d",&d);
        if(d%100==0)
        {
            printf("bal=%d",bal+d);
        }
        else
        {
            printf("not deposited");
            printf("%d",bal);
        }
        case 3:
        printf("withdrwal amount");
        scanf("%d",&x);
        if(x%100==0)
        {
            printf("bal=%d",bal-x);
        }
        else
        {
            printf("no withdrwal");
            printf("%d",bal);
        }
    }
    else
    {
        printf("not valid");
    }
        if(bal>500)
        {
            printf("%d",bal);
        }
        else
        {
            printf("error");
        }
return 0;
}

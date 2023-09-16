#include <stdio.h>
#include <conio.h>
void main()
{   
    int n,i,flag=0;
    clrscr();
    printf("Enter no.\n");
    scanf("%d",&n);

    for(i=2; i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Number is not Prime");
            flag=1;
            break;        
        }
    }
    if(flag==0)
    printf("Number is prime");
    getch(); 
    return 0;
}
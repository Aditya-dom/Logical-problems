/*
C program to check a year is leap year or not
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("Input the year to check if it is a leap year or not. \n");
    scanf("%d", &year);

    /*Logic*/
    /*
    * if (year is not divi by 4) then (it is a common year)
    * else if (year is not divi by 100) then (it is a leap year)
    * else if (year is not divi by 400) then (it is a common year)
    * else (it is a leap year)
    */

   if(year%4 !=0){
    printf("%d is not a leap year\n",year);
    }
    else{
        if(year%100 ==0){
            if(year%400 ==0){
                printf("%d is a leap year\n", year);
            }else{
                printf("%d is not a leap year\n, year");
            }
        }else{
            printf("%d is a leap year\n", year);
        }
    }
    getch();
    return 0;
}
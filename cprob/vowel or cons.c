/*
* C program to check whether an alphabet is vowel or consonant using function
* vowels: {A,E,I,O,U} 
*/

#include <stdio.h>
#include <conio.h>
/*Difference btw a lowercase and it's corresponding uppercase alphabet is 32 -- 'a' - 'A' = 32*/
#define LOWERCASE_TO_UPPERCASE_DIFFERENCE 32
int isVowel(char c);
int isLowerCase(char c);
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    /* Check if input alphabet is member of set{A,E,I,O,U,a,e,i,o,u} */
    if(isVowel(c))
    {
        printf("%c is a vowel\n",c);
    
    }else{
        print("%c is a consonant\n",c);
    }
    getch();
    return 0;
}
/*
*Func to check whether an alphabet is lowercase or not
* returns 1 for lower case characters otherwise 0
*/
int isLowerCase(char c)
{
    if(c>= 'a' && c<='z')
        return 1;
    else
        return 0;
}
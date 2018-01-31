#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char input[200];
    printf("Enter the sentence:\n");
    gets(input);
    strlwr(input);
    printf("Lower case sentence:\t%s",input);
    return 0;
}

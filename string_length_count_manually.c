#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100]; //char type string.
    printf("Enter the sentence?");
    gets(str);
    int i;
    for(i=0;str[i]!=0;i++);
    printf("Number of charecter:%d",i);
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[80];
	int i=0, len, j;
	printf("Enter the String : ");
	gets(str);
	len=strlen(str);
        if(str[0]=='/' && str[1]=='*' && str[len-1]=='/' && str[len-2]=='*' )
        {
           printf("Comment");
        }
        else if(str[0]=='/' && str[1]=='/')
        {
          printf("Comment");
        }
        else {
           printf("No");
        }
	  getch();
}

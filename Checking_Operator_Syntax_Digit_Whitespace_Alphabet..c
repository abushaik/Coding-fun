#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[80];
	int i=0, len, a=0,c=0,v=0,d=0,w=0;
	printf("Enter the String : ");
	gets(str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]>='a' && str[i] <='z' || str[i]>='A' && str[i] <='Z')
		{
           printf("Alphabet");
		}

		else if(str[i]=='+' || str[i] =='-' || str[i] =='*' || str[i] =='/'){
           printf("Operator");
		}
		else if(str[i]=='@' || str[i] =='#' || str[i] =='$' || str[i] =='%' || str[i] =='^' || str[i] =='&'){
		    printf("Syntax");
		}
		else if(str[i]==' '){
            printf("Whitespace");
		}
		else{
            printf("Digit");
		}
	}
	getch();
}

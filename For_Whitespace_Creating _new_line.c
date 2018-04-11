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
	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
		{
                   str[i]= '\n';
		}
	}
	printf("String after removing spaces = %s\n", str);
	getch();
}

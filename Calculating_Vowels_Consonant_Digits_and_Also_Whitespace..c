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
                     a++;
                     if (str[i]=='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u' || str[i] =='A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U'){
                        v++;
		    }
		    else{
                        c++;
		    }

		}

		else if(str[i]==' '){
                    w++;
		}
		else{
		    d++;
		}
	}
	printf("Number of alphabet= %d\n", a);
	printf("Number of Vowel= %d\n", v);
	printf("Number of consonant= %d\n", c);
	printf("Number of whitespace= %d\n", w);
	printf("Number of digit= %d\n", d);
	getch();
}

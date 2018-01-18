#include<Stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(s);
   count=strlen(s); // Calculating string length
   end = count - 1;
   for (begin = 0; begin < count; begin++)
   {
      r[begin] = s[end]; //copy reverse string in a new string
      end--;
   }
   printf("%s\n", r);
   return 0;

}

#include<stdio.h>
int main()
{
    char a;
    char op;
    char b;

    printf("Enter 1st number?\n");
    a= getchar();
    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
        printf("Wrong input");
        return 0;
    }
    else{
      printf("Right input\n");
    }


    printf("Enter the 2nd number\n");
    b=getchar();
    if(b>='a' && b<='z' || b>='A' && b<='Z')
    {
        printf("Wrong input");
        return 0;
    }
    else
        printf("Right input and continue \n");

    printf("Enter the operation you want?");
    scanf("%c",&op);
    if(op>='+' && op<='-' && op>='*' && op<='/')
    {
        printf("Right input");
        return 0;
    }
    else
        printf("Wrong input \n");
   
    return 0;


}

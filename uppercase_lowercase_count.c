#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[100];
    int i,j=0,k=0;
    printf("Enter a String\n");
    gets(input);
    for(i=0; input[i] != '\0'; i++){
        if(isupper(input[i])){
            j++;
        }
        else if(islower(input[i])) {
            k++;
        }
    }
    printf("Uppercase letter:%d\n",j);
    printf("Lowercase letter:%d\n",k);

    getch();
    return 0;
}

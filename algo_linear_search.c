#include<stdio.h>
int linear_search(int arr[],int key,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key == arr[i]){
            printf("Found");
            break;
        }
    }
    if(i == n){
        printf("Not Found");
    }
}
int main()
{
    int fix[] = {1,2,3,4,5,6};
    int n = sizeof(fix)/sizeof(fix[0]);
    linear_search(fix,100,n);
}

#include<stdio.h>

int binary_search(int arr[], int key,int n)
{
    int low = 0;
    int high = n-1;
    while(low <= high)
    {
        int middle = (low+high)/2;
        if(arr[middle] == key){
            printf("Found");
            break;
        }
        else if(arr[middle] < key)
        {
            low = middle + 1 ;
        }
        else
            high = middle-1;
    }
    if(low>high)
        printf("Not Found");
}

int main()
{
   int fix[] = {1,2,3,4,5,6};
   int n = sizeof(fix)/sizeof(fix[0]);
   binary_search(fix,5,n) ;
}

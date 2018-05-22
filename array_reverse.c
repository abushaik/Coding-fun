#include<stdio.h>
void reversearray(int arr[],int strat,int end)
{
    while(strat < end){
        int temp = arr[strat];
        arr[strat] = arr[end];
        arr[end] = temp;
        strat++;
        end--;
    }
}

int main()
{
    int arr[6],i;
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    reversearray(arr,0,5);
    for(i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}


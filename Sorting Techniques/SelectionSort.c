#include<stdio.h>
void mySwap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void printArray(int arr[],int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
void selectionSort(int arr[],int n)
{
    int minIdx;
    for(int i=0;i<n-1;i++)
    {
        minIdx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIdx])
                minIdx=j;
        }
        mySwap(&arr[minIdx],&arr[i]);
    }
}
int main()
{
    int arr[10]={100,23,19,283,3,1,2,12,31,122};
    selectionSort(arr,10);
    printArray(arr,10);
    return 0;
}
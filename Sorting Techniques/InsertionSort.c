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
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[10]={100,23,19,283,3,1,2,12,31,122};
    insertionSort(arr,10);
    printArray(arr,10);
    return 0;
}
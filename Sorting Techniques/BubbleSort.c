#include<stdio.h>
void mySwap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void bubbleSort(int arr[],int n)
{
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        //The Outer loop (at worst[i.e. if the array is sorted the wrong way]) runs n-1 times.
        swapped=false;
        //in every iteration swapped is iniated to false and if swap is called,swapped is assigned to true.
        //this is an optimization since if swapped remains false at the tail then it means there was no swapping done in the subarray. therfore the array is sorted. 
        for(int j=0;j<n-(i+1);j++)
        //this loop iteratates through the unsorted subarray
        //i.e.  in the first iteration of the outer loop, j reaches till n-2,therefore j+1 is the last element.
        //      and in the next iteration of the outrer loop j reaches n-3 and so on. 
        //thus in every iteration the largest element of the subarray moves to the end.
            if(arr[j]>arr[j+1])
            {
                mySwap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        if(swapped==false)
        break;
    }
}
void printArray(int arr[],int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
int main()
{
    int arr[10]={100,23,19,283,3,1,22,331,31,0};
    bubbleSort(arr,10);
    printArray(arr,10);
    return 0;
}
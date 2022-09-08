#include<stdio.h>
void mergeSort(int arr[] , int si , int ei){
    if (si>=ei){
        return;
    }
    int mid = si+(ei-si)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);    
}


void merge(int arr[], int si, int mid, int ei){
    int temp[ei-si+1];
    int i=si;
    int j=mid+1;
    int k=0;
    while (i<=mid && j<=ei)
    {
       if (arr[i]<arr[j])
       {
        temp[k]=arr[i++];
       }
       else
       {
        temp[k]=arr[j++];
       }
       k++;
    }
    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while (j<=ei)
    {
        temp[k++]=arr[j++];
    }

    int size = sizeof(temp)/sizeof(int);

    for ( i =si, k=0; k<size; k++ , i++)
    {
        arr[i] = temp[k];
    }
}

void printArray(int arr[]){
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void main()
{
    int arr[]={3,5,2,7,2,1,5,6,3,1,2};
    int ei=sizeof(arr)/sizeof(int);
    mergeSort( arr , 0 , ei);
    printArray(arr);
}

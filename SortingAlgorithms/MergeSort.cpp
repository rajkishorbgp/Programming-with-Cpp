#include <iostream>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{
    int temp[ei - si + 1];
    int i = si;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i++];
        }
        else
        {
            temp[k] = arr[j++];
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= ei)
    {
        temp[k++] = arr[j++];
    }
    int size = sizeof(temp) / sizeof(int);
    for (i = si, k = 0; k < size; i++, k++)
    {
        arr[i] = temp[k];
    }
}
void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
    Output:
    1 2 3 4 5 6 7 8 9
*/
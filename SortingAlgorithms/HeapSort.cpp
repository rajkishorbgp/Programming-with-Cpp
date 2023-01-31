#include <iostream>
using namespace std;

void heapify(int arr[], int size, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int maxIdx = i;

    if (left < size && arr[left] > arr[maxIdx])
    {
        maxIdx = left;
    }
    if (right < size && arr[right] > arr[maxIdx])
    {
        maxIdx = right;
    }
    if (maxIdx != i)
    {
        int temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
        heapify(arr, size, maxIdx);
    }
}
void heapSort(int arr[], int size)
{
    // build max heap
    int n = size;
    for (int i = n / 2; i >= 0; i--)
    {
        heapify(arr, size, i);
    }

    // push largest at end
    for (int i = n - 1; i > 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    heapSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*
  Output:
  1 2 3 4 5 6 7 8 9
*/
#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei)
{
    int pivot = arr[ei];
    int j = si;
    for (int i = si; i < ei; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    int temp = arr[j];
    arr[j] = arr[ei];
    arr[ei] = temp;
    return j;
}

void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int pidx = partition(arr, si, ei);
    quickSort(arr, si, pidx - 1);
    quickSort(arr, pidx + 1, ei);
}

int main()
{
    int arr[] = {9, 8, 7, 7, 6, 5, 1, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
    Output:
    1 1 2 3 4 5 6 7 7 8 9
*/
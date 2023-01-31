#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > temp)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = temp;
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    int size = sizeof(arr) / sizeof(int);
    insertionSort(arr, size);

    // print array
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
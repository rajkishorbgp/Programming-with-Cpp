#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    int min, si = 0;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[si];
        arr[si] = temp;
        si++;
    }
}

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};

    int size = sizeof(arr) / sizeof(int);
    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
    Output:
    1 2 3 4 5 6 7 8
*/
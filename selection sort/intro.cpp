#include <iostream>
using namespace std;

// Selection sort is effecient in array with less elements
void selectionSort(int arr[], int size)
{
    int minElement;
    for (int i = 0; i < size; i++)
    {
        minElement = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minElement])
                minElement = j;
        }
        swap(arr[i], arr[minElement]);
    }
}

int main()
{
    int arr[7] = {3, 5, 2, 7, 4, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
                // shift
                arr[j + 1] = arr[j];
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[4] = {3, 1, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[7] = {1, 0, 0, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
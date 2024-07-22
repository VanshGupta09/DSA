#include <iostream>
using namespace std;

void sort0sand1s(int arr[], int size)
{
    int lastIndexOf0 = 0;
    int lastIndexOf1 = 1;

    for (int i = 0; i < size; i++)
    {
        if (!arr[i])
        {
            swap(arr[lastIndexOf0], arr[i]);
            lastIndexOf0++;
            lastIndexOf1++;
        }
        else if (arr[i] == 1)
        {
            swap(arr[lastIndexOf1], arr[i]);
            lastIndexOf1++;
        }
        lastIndexOf0++;
        lastIndexOf1++;
    }
}

int main()
{
    int arr[5] = {1, 2, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort0sand1s(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}
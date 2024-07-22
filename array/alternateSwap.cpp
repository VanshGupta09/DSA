#include <iostream>
using namespace std;

void alternateSwap(int arr[], int size)
{
    int i = 0;
    while (i < size - 1)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[1]);
    alternateSwap(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
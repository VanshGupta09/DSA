#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0, end = size - 1, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    // while (start < end)
    // {
    //     mid = start + (end - start) / 2;
    //     if (arr[0] <= arr[mid])
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid;
    //     }
    // }
    return end;
}

int main()
{
    int arr[19] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << pivot(arr, size);
    return 0;
}

#include <iostream>
#include <numeric>
using namespace std;

// Pivot means element of array in which sum of left side and right side elemsts be equal
int pivotIndex(int arr[], int size)
{
    int total_sum = 0;
    int left_sum = 0;
    for (int i = 0; i < size; ++i)
    {
        total_sum += arr[i];
    }

    for (int i = 0; i < size; ++i)
    {
        int right_sum = total_sum - left_sum - arr[i];
        if (left_sum == right_sum)
        {
            return i;
        }
        left_sum += arr[i];
    }

    return -1;
}

int main()
{
    int arr[6] = {1, 2, 4, 7, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << pivotIndex(arr, size);
    return 0;
}
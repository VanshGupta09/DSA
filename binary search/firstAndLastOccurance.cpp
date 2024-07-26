#include <iostream>
using namespace std;

void firstAndLastOccurance(int arr[], int size, int target)
{
    int start = 0, end = size - 1, mid;
    int ans1, ans2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans1 = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    start = 0, end = size - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans2 = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans1 << " " << ans2 << endl;
}

int main()
{
    int arr[10] = {2, 3, 4, 5, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    firstAndLastOccurance(arr, size, 5);
    return 0;
}
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        // It can exceed the limit of INT_MAX
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int evenArray[10] = {2, 4, 5, 6, 12, 14, 15, 24, 35, 40};
    int oddArray[9] = {2, 4, 5, 6, 12, 14, 15, 24, 35};
    int size1 = sizeof(evenArray) / sizeof(evenArray[0]), size2 = sizeof(oddArray) / sizeof(oddArray[0]);

    cout << binarySearch(evenArray, size1, 13) << endl;
    cout << binarySearch(oddArray, size2, 24) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int minElement(int arr[], int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    return min;
}
int maxElement(int arr[], int size)
{
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    return max;
}

int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[100];

    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Minimum element " << minElement(arr, size) << endl;
    cout << "Maximum element " << maxElement(arr, size) << endl;

    return 0;
}
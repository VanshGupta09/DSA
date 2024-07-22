#include <iostream>
using namespace std;

int duplicateElm(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
                return arr[i];
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << duplicateElm(arr, 5);

    return 0;
}
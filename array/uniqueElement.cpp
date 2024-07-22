#include <iostream>
using namespace std;

int uniqueElm(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true; // Assume the element is unique initially
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                isUnique = false; // Element is not unique
                break;            // No need to check further
            }
        }
        if (isUnique)
            return arr[i];
    }
    return 0; // Return 0 if no unique element is found
}

int main()
{
    int arr[5] = {2, 2, 4, 4, 5};
    cout << uniqueElm(arr, 5);

    return 0;
}
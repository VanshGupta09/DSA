#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the element to find" << endl;
    cin >> key;

    if (search(arr, 5, key))
    {
        cout << key << " is present in array";
    }
    else
    {
        cout << key << " is not present in array";
    }
    return 0;
}
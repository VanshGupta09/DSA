#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // Double-ended queue initailization
    deque<int> arr;

    // We can push and pop elements from front and back in deque
    arr.push_back(1);
    arr.push_front(2);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // arr.pop_front();
    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "Element at 0 index -> " << arr.at(0) << endl;
    cout << "Front -> " << arr.front() << endl;
    cout << "Back -> " << arr.back() << endl;
    cout << "Is empty -> " << arr.empty() << endl;

    //  Deleting element at 0 index
    arr.erase(arr.begin(), arr.begin() + 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
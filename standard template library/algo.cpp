#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Max -> " << max(a, b) << endl;
    cout << "Max -> " << max(a, b) << endl;
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;

    string st = "vansh";
    reverse(st.begin(), st.end());
    cout << st << endl;

    rotate(v.begin(), v.begin() + 2, v.end());

    cout << "Rotated vector ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    cout << "Sorted vector ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
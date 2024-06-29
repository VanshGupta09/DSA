// 1 2 3 4 4 3 2 1
// 1 2 3 * * 3 2 1
// 1 2 * * * * 2 1
// 1 * * * * * * 1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }
        int k = 1;
        while (k <= 2 * i)
        {
            cout << "* ";
            k++;
        }
        int l = 1;
        while (l <= n - i + 1)
        {
            cout << n - l - i + 2 << " ";
            l++;
        }
        i++;
        cout << endl;
    }
}
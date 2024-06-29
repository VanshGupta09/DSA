//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
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
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        int k = i - 1;
        while (k)
        {
            cout << k<<" ";
            k--;
        }

        i++;
        cout << endl;
    }
}
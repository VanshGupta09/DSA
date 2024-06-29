// 1 2 3 4
//   2 3 4
//     3 4
//       4
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
        while (j <= n)
        {
            if (j > i - 1)
            {
                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
}
// * * * *
//   * * *
//     * *
//       *

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
            if (j > i-1)
            {
                cout << "* ";
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
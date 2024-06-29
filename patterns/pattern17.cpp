// 1 1 1 1
//   2 2 2
//     3 3
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
            if (j < i)
            {
                cout << "  ";
            }
            else
            {
                cout << i << " ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
}
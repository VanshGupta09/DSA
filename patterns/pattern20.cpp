//       1
//     2 3
//   4 5 6
// 7 8 9 10
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << count << " ";
                count++;
            }
            j++;
        }
        i++;
        cout << endl;
    }
}
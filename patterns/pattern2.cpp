// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number\n";
    cin >> a;

    //  Using for loop
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = a; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


    //  Using While loop
    int i = 1;
    while (i <= a)
    {
        int j = 1;
        while (j <= a)
        {
            cout << a - j + 1<<" ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
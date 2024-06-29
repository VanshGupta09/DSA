// D
// C D
// B C D
// A B C D

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
        int j = i;
        while (j >= 1)
        {
            char ch = 'A' + n - j;
            cout << ch << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
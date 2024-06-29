// A
// B C
// D E F

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;

    int i = 1;
    int count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            j++;
            count++;
        }
        i++;
        cout << endl;
    }

    return 0;
}
// A B C D
// E F G H
// I J K L
// M N O P 
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
        while (j <= n)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
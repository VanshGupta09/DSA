#include <iostream>
#include <math.h>
using namespace std;

// Convertion from binary to decimal
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    int ans = 0;
    int i = 1;
    while (n)
    {
        int digit = n & 1;
        ans += digit * i;
        i *= 2;
        n = n/10;
    }
    cout << ans;

    return 0;
}
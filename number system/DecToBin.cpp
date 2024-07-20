#include <iostream>
#include <math.h>
using namespace std;

// Convertion from decimal to binary
int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;

    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int bit = n & 1;
        ans += (bit * i);
        n = n >> 1;
        i *= 10;
    }
    cout << ans;

    return 0;
}

// #include <iostream>
// #include <math.h>
// using namespace std;

// // Convertion from decimal to binary
// int main()
// {
//     int n;
//     cout << "Enter a number\n";
//     cin >> n;

//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         // cout<<bit<<" "<<pow(10,i)<<" "<<ans<<endl;
//         ans = ( bit * pow(10, i) ) + ans;
//         n = n >> 1;
//         i++;
//         // cout<<ans<<endl;
//     }
//     cout << ans;

//     return 0;
// }
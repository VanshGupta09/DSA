#include <iostream>
using namespace std;

int setBits(int a)
{
    int count = 0;
    while (a != 0)
    {
        count = count + (a & 1);
        a = a >> 1;
    }

    return count;
}

// To find total no. of set bits
int TotaletBits(int a, int b)
{
    return setBits(a) + setBits(b);
}

int main()
{
    cout << TotaletBits(7, 3);
    return 0;
}
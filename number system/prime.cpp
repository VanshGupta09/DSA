#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isPrime(93);
    return 0;
}
#include <iostream>
using namespace std;

int factorial(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans *= i;
    }
    return ans;
}

float nCr(int n, int r)
{
    float ans;
    ans = (factorial(n)) / (factorial(r) * factorial(n - r));
    return ans;
}

int main()
{
    cout << nCr(4, 0);
    return 0;
}
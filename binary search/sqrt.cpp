#include <iostream>
using namespace std;

int MySqrt(int n)
{
    int start = 0, end = n, ans;
    long long int mid, sqr;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        sqr = mid * mid;
        if (sqr == n)
        {
            return mid;
        }
        else if (sqr > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

double double_sqrt(int n, int tempAns, int precision)
{
    double ans=tempAns, sqr, divisor = 1;
    for (int i = 1; i <= precision; i++)
    {
        divisor = divisor / 10;
        for (double j = tempAns; j * j < n; j += divisor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 37;
    cout << "Enter a positive number" << endl;
    cin >> n;
    int tempAns = MySqrt(n);
    int ans = double_sqrt(n, tempAns, 3);
    cout<<ans;
    return 0;
}
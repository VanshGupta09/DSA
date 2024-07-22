#include <iostream>
using namespace std;

// Finding nth term of an arthematic progression
int NthTerm(int a, int d, int n)
{
    return a + (n - 1) *d;
}

int main()
{
    cout << NthTerm(2, 1, 8);
    return 0;
}
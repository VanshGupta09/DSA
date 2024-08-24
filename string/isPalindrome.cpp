#include <iostream>
using namespace std;

bool checkPalindrome(string str)
{
    int start = 0, end = str.size() - 1;
    while (start < end)
    {
        if (str[start++] != str[end--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter string" << endl;
    cin >> str;
    cout <<"Is palindrome -> "<< checkPalindrome(str) << endl;
    return 0;
}
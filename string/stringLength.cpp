#include <iostream>
using namespace std;

int countLength(char str[])
{
    int length = 0;
    // Count the length of the string
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char name[10];
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "The length of the name is: " << countLength(name) << endl;
    return 0;
}
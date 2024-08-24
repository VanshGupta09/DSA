#include <iostream>
using namespace std;

void reverseString(char str[],int n)
{
    int start=0,end=n-1;
    while (start<end)
    {
        swap(str[start++],str[end--]);
    }
    
}

int countLength(char str[])
{
    int length = 0;
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
    int length = countLength(name);
    reverseString(name, length);
    cout << "Reverse of name is: " << name << endl;
    return 0;
}
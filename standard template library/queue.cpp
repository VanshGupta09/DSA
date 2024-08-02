#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> qu;
    qu.push("vansh");
    qu.push("gupta");

    cout << "First element -> " << qu.front() << endl;
    qu.pop();
    cout << "First element -> " << qu.front() << endl;
    cout << "Is empty -> " << qu.empty() << endl;
    cout << "Size -> " << qu.size() << endl;

    return 0;
}
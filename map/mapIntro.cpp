#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // map is like object
    map<string, int> marks;

    marks["vansh"] = 100;
    marks["rahul"] = 80;

    marks.insert({{"rohan", 87}, {"kartik", 70}});

    map<string, int>::iterator itr;

    // for loop
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // map is key value pair with unique key which will only point to a single value
    map<int, string> m;
    m[1] = "vansh";
    m[3] = "aditya";
    m[2] = "gupta";
    m.insert({4, "adi"});

    // map is sorted
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Is key 2 present -> " << m.count(2) << endl;
    m.erase(4);
    
    return 0;
}
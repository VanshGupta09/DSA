#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // No duplicates
    // Arranged in sorted order
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // iterator
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Checks whether element is present or not
    cout << "Is 4 present -> "<<s.count(4) << endl;

    set<int>::iterator itr = s.find(3);
    cout<<*itr<<endl;

    return 0;
}
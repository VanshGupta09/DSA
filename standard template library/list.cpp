#include <iostream>
#include <list>
using namespace std;

int main()
{
    // We cannot randomly access elements in list

    list<int> l;
    // Copy of list l
    list<int> m(l);
    // ELements will 2 with size 5
    list<int> m(5, 2);

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list -> " << l.size() << endl;

    return 0;
}
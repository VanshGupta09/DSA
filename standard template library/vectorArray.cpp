#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {3, 1, 4, 6};
    
    // 4 is size vector and 1 will be value of every element
    vector<int> vect(4, 1);

    // Copy of vector vect
    vector<int> last(vect);

    v.pop_back();

    // Size means number of elements
    cout << "Size of vector is -> " << v.size() << endl;
    // Capacity means size of vector
    cout << "Capacity of vector is -> " << v.capacity() << endl;
    v.push_back(5);
    cout << "Front -> " << v.front() << endl;
    cout << "Back -> " << v.back() << endl;
    cout << "Element at 2nd index -> " << v.at(2) << endl;

    cout << "Printing elements of vect" << endl;
    for(int i:vect){
        cout<<i<<endl;
    }

    return 0;
}
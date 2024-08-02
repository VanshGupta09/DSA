#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> arr = {3, 1, 2, 6};
   
   cout<<"Size of array is -> "<<arr.size()<<endl;
   cout<<"Element at 2nd index of array is -> "<<arr.at(2)<<endl;
   cout<<"Is array empty -> "<<arr.empty()<<endl;
   cout<<"First Element -> "<<arr.front()<<endl;
   cout<<"Last Element -> "<<arr.back()<<endl;
    return 0;
}
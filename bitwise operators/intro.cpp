#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 5;
    cout << "And of a and b (a&b): " << int(a & b) << endl;
    cout << "OR of a and b (a|b): " << int(a | b) << endl;
    cout << "And of a and b (~a): " << int(~a) << endl;
    cout << "And of a and b (a^b): " << int(a ^ b) << endl;
    cout << "1 time right shift of 4: " << int(4 << 1) << endl;
    cout << "2 time right shift of 4: " << int(4 << 2) << endl;
    cout << "1 time left shift of 4: " << int(4 >> 1) << endl;
    cout << "2 time left shift of 4: " << int(4 >> 2) << endl;

    return 0;
}
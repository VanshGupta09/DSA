#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> st;
    st.push("vansh");
    st.push("gupta");

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << "Is empty -> " << st.empty() << endl;

    return 0;
}
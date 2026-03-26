#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;

    s.pop();

    cout << "Top after pop: " << s.top() << endl; 

    cout << "Size: " << s.size() << endl;

    cout << "Empty? " << s.empty() << endl;

    return 0;
}
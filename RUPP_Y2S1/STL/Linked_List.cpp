#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // push_front & push_back
    l.push_front(10);   
    l.push_back(20);    
    l.push_front(5);
    l.push_back(30);  

    // front & back
    cout << "Front: " << l.front() << endl; 
    cout << "Back: " << l.back() << endl;   

    // size & empty
    cout << "Size: " << l.size() << endl;
    cout << "Empty? " << l.empty() << endl;

    // max_size
    cout << "Max size: " << l.max_size() << endl;

    // begin → end (forward traversal)
    cout << "Forward: ";
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // rbegin → rend (reverse traversal)
    cout << "Reverse: ";
    for (auto it = l.rbegin(); it != l.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // cbegin (read-only iterator)
    cout << "Const traversal: ";
    for (auto it = l.cbegin(); it != l.cend(); it++) {
        cout << *it << " ";
        // *it = 100;  not allowed (read-only)
    }
    cout << endl;

    // pop_front & pop_back
    l.pop_front(); 
    l.pop_back(); 

    cout << "After pop: ";
    for (auto x : l) {
        cout << x << " ";
    }

    return 0;
}
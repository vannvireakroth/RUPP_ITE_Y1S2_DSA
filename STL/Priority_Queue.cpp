#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  MAX HEAP (biggest first)
    priority_queue<int> maxPQ;

    maxPQ.push(10);
    maxPQ.push(30);
    maxPQ.push(20);

    cout << "=== MAX HEAP ===" << endl;

    cout << "Top: " << maxPQ.top() << endl;
    cout << "Size: " << maxPQ.size() << endl;
    cout << "Empty? " << maxPQ.empty() << endl;

    cout << "Elements: ";
    while (!maxPQ.empty()) {
        cout << maxPQ.top() << " ";
        maxPQ.pop();
    }
    cout << endl << endl;

    //  MIN HEAP (smallest first)
    priority_queue<int, vector<int>, greater<int>> minPQ;

    minPQ.push(10);
    minPQ.push(30);
    minPQ.push(20);

    cout << "=== MIN HEAP ===" << endl;

    cout << "Top: " << minPQ.top() << endl;
    cout << "Size: " << minPQ.size() << endl;
    cout << "Empty? " << minPQ.empty() << endl;

    cout << "Elements: ";
    while (!minPQ.empty()) {
        cout << minPQ.top() << " ";
        minPQ.pop();
    }

    return 0;
}
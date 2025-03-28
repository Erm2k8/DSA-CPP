#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Queues = FIFO (First In, First Out)
    // First in:
    queue<int> q;
    
    q.push(1);      // q = {1}
    q.push(2);      // q = {1, 2}
    q.push(3);      // q = {1, 2, 3}
    
    // Methods:
    q.back();       // 3
    q.front();      // 1
    q.size();       // 3 (number of elements)
    
    // Swap
    queue<int> q1;
    queue<int> q2;
    q1.swap(q2);
    // or 
    q2.swap(q1);

    // First out:
    q.pop();        // q = {2, 3}
    q.pop();        // q = {3}
    q.pop();        // q = {}

    return 0;
}
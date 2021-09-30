#include <iostream>
#include <queue>
using namespace std;

int main(){
    // empty queue
    queue<int> myqueue;
    myqueue.push(0);
    myqueue.push(1);
    myqueue.push(2);
    // queue becomes 0, 1, 2

    myqueue.pop();
    myqueue.pop();
    // queue becomes 2

    while(!myqueue.empty()){
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }

    return 0;
}
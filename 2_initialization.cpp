// constructing queues
#include <iostream>     // std::cout
#include <deque>        // std::deque
#include <list>         // std::list
#include <queue>        // std::queue

using namespace std;

int main(){
    deque<int> mydeque (4,100);     // deque with 4 ints of value 100
    list<int> mylist (2,200);       // list with 2 elements

    queue<int> first;
    queue<int> second (mydeque);    // queue initialized to copy of deque

    queue<int,list<int> > third;    // empty queue with lista s underlying container
    queue<int, list<int> > fourth (mylist);

    cout << "size of first: " << first.size() << endl;
    cout << "size of second: " << second.size() << endl;
    cout << "size of third: " << third.size() << endl;
    cout << "size of fourth: " << fourth.size() << endl;
    
    return 0;
}
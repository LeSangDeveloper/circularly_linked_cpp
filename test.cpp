#include<iostream>
#include "circularly_linked_queue.h"

using namespace std;

int main() {
    CircleList<int> a;
    a.add(2);
    a.add(4);
    cout << a.front() << endl;
    cout << a.back() << endl;
    return 0;
}
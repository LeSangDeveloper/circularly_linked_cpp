#include"circularly_linked_queue.h"
#include<string>

using namespace std;

template<typename E>
CircleList<E>::CircleList()
: cursor(NULL) {}

template<typename E>
CircleList<E>::~CircleList()
{
    while(!empty()) remove();
}

template<typename E>
bool CircleList<E>::empty() const
{
    return cursor == NULL;
}

template<typename E>
const E& CircleList<E>::back() const
{ return cursor->elem; }

template<typename E>
const E& CircleList<E>::front() const
{ return cursor->next->elem; }

template<typename E>
void CircleList<E>::advance() {
    cursor = cursor->next;
}

template<typename E>
void CircleList<E>::add(const E& e) {
    CNode<E>* v = new CNode<E>;
    v->elem = e;
    if (cursor == NULL) {
        v->next = v;
        cursor = v;
    } else {
        v->next = cursor->next;
        cursor->next = v;
    }
}

template<typename E>
void CircleList<E>::remove() {
    CNode<E>* old = cursor->next;
    if (old == cursor)
        cursor = NULL;
    else
        cursor->next = old->next;
    delete old;
}

template class CircleList<int>;
template class CircleList<double>;
template class CircleList<float>;
template class CircleList<string>;
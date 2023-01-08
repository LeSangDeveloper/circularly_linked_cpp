#ifndef CIRCULARLY_LINKED_QUEUE_H
#define CIRCULARLY_LINKED_QUEUE_H 

template<typename E>
class CircleList;

template<typename E>
class CNode {
    private:
        E elem;
        CNode* next;

        friend class CircleList<E>;
};

template<typename E>
class CircleList {
    private:
        CNode<E>* cursor;
    public:
        CircleList();
        ~CircleList();
        bool empty() const;
        const E& front() const;
        const E& back() const;
        void advance();
        void add(const E& e);
        void remove();
};

#endif
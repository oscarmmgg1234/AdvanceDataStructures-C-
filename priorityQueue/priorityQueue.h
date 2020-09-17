//
// Created by Oscar Maldonado on 2019-06-13.
//

#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

// Priority_queue.h

#include <vector>

using namespace std;

template <class T>
class Priority_queue {
public:
    /* we don't need Big-6 since vector already has them, but here they are for reference */
    Priority_queue(const Priority_queue & p): c(p.c) { }
    Priority_queue(Priority_queue && p): c(move(p.c)) { }
    Priority_queue & operator=(const Priority_queue & p) { c = p.c; return *this; }
    Priority_queue & operator=(Priority_queue && p) { swap(c, p.c); return *this; }
    ~Priority_queue() = default; // vector destructor is called by default


    bool empty() { return c.empty(); }
    unsigned int size() { return c.size(); }
    void push(const T & x);
    void push(T && x);
    void pop();
    const T & top() const { return c.front(); }

private:
    vector<T> c;
};
//---------------------------------------------------------------------------------------------------------------------
template <typename T>
void Priority_queue<T>::push(const T &x)
{
    Priority_queue<T>::c.push_back(x);
}
//---------------------------------------------------------------------------------------------------------------------
template <typename T>
void Priority_queue<T>::push(T &&x)
{
    Priority_queue<T>::c.push_back(move(x));
}
//---------------------------------------------------------------------------------------------------------------------
template <typename T>
void Priority_queue<T>::pop()
{
    Priority_queue<T>::c.pop_back();
}



#endif //PRIORITYQ_PRIORITYQUEUE_H

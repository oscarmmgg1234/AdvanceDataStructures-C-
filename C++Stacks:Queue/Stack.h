
#include "../List/List.h"

/*
 * Oscar Maldonado
 * 06/6/2019
 * Stack/Queue's
 *
 * Description: This class is suppose to act as a wrapper to any container type
 */


#ifndef STACK_STACK_H
#define STACK_STACK_H
template <typename T, template <class S> class Container = List>
class Stack //wrapper to any container type
{
public:
    // don't need Big-6, Container already includes them
    bool empty() const
    {

        return {container.empty()};
    }
    unsigned int size() const
    {
        return container.size();
    }
    void push(const T & x)
    {
        container.push_front(x);
    }
    void push(T && x)
    {
        container.push_front(x);
    }
    void pop()
    {
        container.pop_back();
    }
    T & top()
    {
        container.front();
    }

private:
    Container<T> container;
};




#endif //STACK_STACK_H

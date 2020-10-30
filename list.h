#include <iostream>

#ifndef LISTTEMP_H

#define LISTTEMP_H

template <class T>
class List
{
    public
    List();
    List(const List<T> &);
    ~List();
    int getSize();
    List<T>&operator = (const List<T>&);
    bool operator == (const List<T> &);
    T &operator[](int)
    private:
    int size;
    T *ptr;
};


#endif // LISTTEMP_H

#include "list.h"

List<T>::List(List<T> &init)
{
    size = init.size;
    ptr = new T[size]
    for(int i = 0; i < size; i++)
    {
        ptr[i] = init.ptr[i];
    }
}


List<T>::~List()
{
    if(ptr)
    {
        delete [] ptr;
    }
}


int List<T>::getSize()
{
    return size;
}

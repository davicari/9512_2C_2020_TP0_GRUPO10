
template<class T>
List<T>::List(const List<T> &init)
{
    size = init.size;
    ptr = new T[size]
    for(int i = 0; i < size; i++)
    {
        ptr[i] = init.ptr[i];
    }
}

template<class T>
List<T>::~List()
{
    if(ptr)
    {
        delete [] ptr;
    }
}

template<class T>
int List<T>::getSize()
{
    return size;
}

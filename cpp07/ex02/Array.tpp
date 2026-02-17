template <typename T>

Array<T>::Array() : elements(NULL), _n(0)  {}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n) {
    elements = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T> &other): elements(NULL), _n(0){
    *this = other;
}


template <typename T>
Array<T> & Array<T>::operator=(const Array<T> &other){
    if(this != &other)
    {
        delete[] elements;
        this->_n = other._n;
        if(this->_n > 0)
        { 
            this->elements = new T[_n];
            for (size_t i = 0; i < _n; i++)
            {
                this->elements[i] = other.elements[i];
            }
        }
        else
            this->elements = NULL;
    }
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _n;
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
    if(i >= _n || elements == NULL)
        throw std::out_of_range("index out of range");
    else return elements[i];
}

template <typename T>
const T & Array<T>::operator[](unsigned int i) const
{
    if(i >= _n || elements == NULL)
        throw std::out_of_range("index out of range");
    else return elements[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] elements;
}
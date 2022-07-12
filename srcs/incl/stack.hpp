#include <vector>

namespace ft
{
    template <class T, class Container = std::vector<T> > //Provisional, cambiar por ft::vector cuando se pueda...
    class stack
    {
        typedef T           value_type;
        typedef Container   container_type;
        typedef size_t      size_type;
    };
}
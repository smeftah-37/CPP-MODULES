

#include "Serialize.hpp"

int main()
{
    Data *d = new Data(2, "safae");
    uintptr_t a = Serializer::serialize(d);
    std::cout << a << std::endl;
    Data *an = Serializer::deserialize(a);
    std::cout << an->_id << "  " << an->_name << std::endl;
}
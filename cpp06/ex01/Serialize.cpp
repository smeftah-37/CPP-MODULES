#include "Serialize.hpp"

Serializer::Serializer()
{
}
Serializer::~Serializer()
{
}
Serializer::Serializer(const Serializer &a)
{
    *this = a;
}
Serializer &Serializer::operator=(const Serializer &a)
{
    (void)a;
    return (*this);
}
uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
Data::Data(int id, std::string name)
{
    _id = id;
    _name = name;
}
Data::~Data()
{
}
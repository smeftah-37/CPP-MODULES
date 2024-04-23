#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <stdint.h>

class Data
{
public:
    int _id;
    std::string _name;

    Data(int id, std::string name);
    ~Data();
};
class Serializer
{
    Serializer();
    ~Serializer();
    Serializer(const Serializer &a);
    Serializer &operator=(const Serializer &a);

public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
#endif
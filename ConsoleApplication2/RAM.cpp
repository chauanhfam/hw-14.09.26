#define _CRT_SECURE_NO_WARNINGS
#include "RAM.h"
#include <cstring>

RAM::RAM(const char* type, int capacity) 
{
    this->capacity = capacity;
    this->type = new char[strlen(type) + 1];
    strcpy(this->type, type);
}

RAM::~RAM() 
{
    delete[] this->type;
}

const char* RAM::getType() const 
{ 
    return this->type; 
}
int RAM::getCapacity() const 
{ 
    return this->capacity; 
}
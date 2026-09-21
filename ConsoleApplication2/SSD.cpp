#define _CRT_SECURE_NO_WARNINGS
#include "SSD.h"
#include <cstring>

SSD::SSD(const char* brand, int capacity) 
{
    this->capacity = capacity;
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
}

SSD::~SSD() 
{
    delete[] this->brand;
}

const char* SSD::getBrand() const 
{ 
    return this->brand; 
}
int SSD::getCapacity() const 
{ 
    return this->capacity;
}

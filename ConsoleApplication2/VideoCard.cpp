#define _CRT_SECURE_NO_WARNINGS
#include "VideoCard.h"
#include <cstring>

VideoCard::VideoCard(const char* model, int memory) 
{
    this->memory = memory;
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

VideoCard::~VideoCard() 
{
    delete[] this->model;
}

const char* VideoCard::getModel() const 
{ 
    return this->model; 
}
int VideoCard::getMemory() const 
{ 
    return this->memory; 
}
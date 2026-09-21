#define _CRT_SECURE_NO_WARNINGS //в мене видавало помилки з strcpy, тому використала #define _CRT_SECURE_NO_WARNINGS
#include "CPU.h"
#include <cstring>
CPU::CPU(const char* model, double frequency) 
{
    this->frequency = frequency;
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}
CPU::~CPU() {
    delete[] this->model;
}
const char* CPU::getModel() const 
{
    return this->model; 
}
double CPU::getFrequency() const 
{ 
    return this->frequency; 
}

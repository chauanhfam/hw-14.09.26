#pragma once

class CPU 
{
private:
    char* model; 
    double frequency;

public:
    CPU(const char* mod, double freq);
    ~CPU();

    const char* getModel() const;
    double getFrequency() const;
};
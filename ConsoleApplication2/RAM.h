#pragma once

class RAM 
{
private:
    char* type;
    int capacity;

public:
    RAM(const char* t, int cap);
    ~RAM();

    const char* getType() const;
    int getCapacity() const;
};
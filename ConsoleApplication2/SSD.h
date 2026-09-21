#pragma once

class SSD 
{
private:
    char* brand; 
    int capacity;

public:
    SSD(const char* b, int cap);
    ~SSD();

    const char* getBrand() const;
    int getCapacity() const;
};

#pragma once
#include "CPU.h"
#include "RAM.h"
#include "SSD.h"
#include "VideoCard.h"
class Laptop 
{
private:
    char* name;  
    char* color;
    double price;

    CPU cpu;
    RAM ram;
    SSD ssd;
    VideoCard gpu;

    static int laptopCount;
public:

    Laptop(const char* n, const char* c, double p,
        const char* cpuMod, double cpuFreq,
        const char* ramType, int ramCap,
        const char* ssdBrand, int ssdCap,
        const char* gpuMod, int gpuMem);

    Laptop(const char* n, double p);

    ~Laptop();

    static int getLaptopCount();
    void printInfo() const;
};
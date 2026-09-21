#define _CRT_SECURE_NO_WARNINGS
#include "Laptop.h"
#include <iostream>
using namespace std;
int Laptop::laptopCount = 0;
Laptop::Laptop(const char* n, const char* c, double p,
    const char* cpuMod, double cpuFreq,
    const char* ramType, int ramCap,
    const char* ssdBrand, int ssdCap,
    const char* gpuMod, int gpuMem) : price(p),
    cpu(cpuMod, cpuFreq),
    ram(ramType, ramCap),
    ssd(ssdBrand, ssdCap),
    gpu(gpuMod, gpuMem)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);

    color = new char[strlen(c) + 1];
    strcpy(color, c);

    laptopCount++;
}
Laptop::Laptop(const char* n, double p)
    : Laptop(n, "Black", p, "Generic CPU", 2.4, "DDR4", 8, "Generic SSD", 256, "Integrated", 0)
{
}

Laptop::~Laptop() 
{
    delete[] name;
    delete[] color;
    laptopCount--;
}

int Laptop::getLaptopCount() 
{
    return laptopCount;
}

void Laptop::printInfo() const 
{
    cout << "Laptop: " << name << " (" << color << ") - $" << price << "\n"
        << "CPU: " << cpu.getModel() << " " << cpu.getFrequency() << "GHz\n"
        << "RAM: " << ram.getType() << " " << ram.getCapacity() << "GB\n"
        << "SSD: " << ssd.getBrand() << " " << ssd.getCapacity() << "GB\n"
        << "GPU: " << gpu.getModel() << " " << gpu.getMemory() << "GB\n\n";
}
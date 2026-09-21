#include <iostream>
#include "Laptop.h"
using namespace std;
int main() 
{
    cout << "Initial laptop count: " << Laptop::getLaptopCount() << "\n\n";

    Laptop myMac("MacBook Pro", "Silver", 1999.99, "Apple M2", 3.5, "Unified", 16, "Apple NVMe", 512, "Apple GPU", 16);
    myMac.printInfo();

    Laptop budgetLaptop("Acer Aspire", 499.99);
    budgetLaptop.printInfo();

    cout << "Current laptop count: " << Laptop::getLaptopCount() << "\n";

    return 0;
}
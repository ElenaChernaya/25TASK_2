#include "cpu.h"
#include "ram.h"

void compute ()
{
    int sum = 0;
    for (int i = 0; i < ram().size(); ++i) {
        sum += ram()[i];
    }
    std::cout << "\nSumma = " << sum <<std::endl;
}


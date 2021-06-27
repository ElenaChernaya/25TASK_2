#include "ram.h"
#include "gpu.h"
#include "ram.h"


void display ()
{
    std::vector<int> tmp = ram();
    for (int i = 0; i < 8; ++i) {
        std::cout << tmp[i] << " ";
    }
}


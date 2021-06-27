#include "ram.h"
#include "kbd.h"

std::vector<int> ram() {
    std::vector<int> buffer(8);
    int i = 0;
    while(i < buffer.size()) {
        buffer.push_back(kbd());
    }
    return buffer;
}


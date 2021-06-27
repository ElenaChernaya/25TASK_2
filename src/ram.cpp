#include "ram.h"


int buffer[8];

void read(int out[8])
{
    for (int i = 0; i < 8; ++i)
    {
        out[i] = buffer[i];
    }
}

void write(int in[8])
{
    for (int i = 0; i < 8; ++i)
    {
        buffer[i] = in[i];
    }
}


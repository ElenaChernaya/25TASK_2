#include "disk.h"
#include "ram.h"


void disk(std::string& command) {
    std::ofstream data_input ("C:/File/data.txt");

    if (command == "save")
    {
       int i = 0;
       while (i < ram().size()) {
           data_input << ram()[i];
       }
       data_input.close();
    }

    else if (command == "load")
    {
        std::vector<int> vec;
        int j = 0;
        std::ifstream data_output ("C:/File/data.txt");
        while(!data_output.eof()) {
            data_output >> j;
            vec.push_back(j);
        }
    }
}
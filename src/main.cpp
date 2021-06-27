#include "headers.h"


int main() {
    std::string command;
    std::cout << "Enter the command: ";
    std::cin >> command;

    while (command != "exit")
    {
        if (command == "input")
        {
            kbd();
        }

        else if (command == "save" || command == "load")
        {
            disk(command);
        }

        else if(command == "display")
        {
            display();
        }

        else if(command == "sum")
        {
            compute();
        }

    }




    return 0;
}

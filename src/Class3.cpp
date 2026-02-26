#include "Class3.h"
#include <iostream>
#include <vector>

namespace Pisalka
{
    void Line()
    {
        std::cout << "----------------------------------------\n";
    }

    void Section(const std::string& title)
    {
        Line();
        std::cout << "[ " << title << " ]\n";
        Line();
    }

    void Info(const std::string& message)
    {
        std::cout << "[INFO] " << message << std::endl;
    }

    void Success(const std::string& message)
    {
        std::cout << "[SUCCESS] " << message << std::endl;
    }

    void Error(const std::string& message)
    {
        std::cout << "[ERROR] " << message << std::endl;
    }
}
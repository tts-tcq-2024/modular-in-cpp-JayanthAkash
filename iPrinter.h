#pragma once
#include <string>

class iPrinter {
public:
    virtual void print(const std::string& output) = 0;
    virtual ~iPrinter() {}
};

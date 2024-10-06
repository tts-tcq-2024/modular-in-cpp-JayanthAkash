#include "iPrinter.h"
#include <iostream>

class ConsolePrinter : public iPrinter {
public:
    void print(const std::string& output) override {
        std::cout << output;
    }
};

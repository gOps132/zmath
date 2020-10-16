// #include <iostream>
#include "zmath_pch.h"

int main(int argc, const char **argv) {
    if (argc > 0) {
        for (int i = 0; i < argc; i++) 
			std::cout << argv[i] << '\n';
    } else {
        std::cout << "hey dudes" << '\n';
    }
}
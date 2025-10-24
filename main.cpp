#include <iostream>

#ifndef VERSION_PROJECT
#define VERSION_PROJECT "1.0.0"
#endif

int main(int, char**){
    std::cout << "Hello, World! Version " << VERSION_PROJECT << std::endl;
    return 0;
}

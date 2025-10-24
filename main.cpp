#include <iostream>

#ifndef VERSION_PROJECT
#define VERSION_PROJECT "1.0.0"
#endif

int main(int, char**){
    std::cout << "Hello, World! Version " << VERSION_PROJECT << std::endl;
    
    double a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    
    std::cout << "Сумма: " << a + b << std::endl;
    std::cout << "Разность: " << a - b << std::endl;
    
    return 0;
}

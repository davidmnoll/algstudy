#ifndef main_algorithms_hpp
#define main_algorithms_hpp

#include "dynamic_programming/fibonacci.hpp"
#include "dynamic_programming/grid.hpp"


int main_fibonacci(int argc, const char * argv[])
{
    std::cout << "start - stack\n";
    std::cout << fibonacci(2);
    std::cout << fibonacci(3);
    std::cout << fibonacci(4);
    std::cout << fibonacci(5);
    std::cout << faster_fibonacci(5);
    std::cout << faster_fibonacci(25);
    std::cout << faster_fibonacci(50);
    std::cout << "wow";
    return 0;

}


int main_grid(int argc, const char * argv[])
{
    std::cout << "start - stack\n";
    std::cout << grid(2, 3);
    std::cout << grid(3, 3);
    std::cout << "wow";
    return 0;

}
#endif
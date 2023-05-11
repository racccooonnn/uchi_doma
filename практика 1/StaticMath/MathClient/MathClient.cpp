#include <iostream>
#include <MathLibrary.h>
int main()
{
    double a = 7.4;
    int b = 99;
    std::cout << "a+b=" << MathLibrary::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a-b=" << MathLibrary::Arithmetic::Substract(a, b) << std::endl;
    std::cout << "a*b=" << MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a/b=" << MathLibrary::Arithmetic::Divide(a, b) << std::endl;
}



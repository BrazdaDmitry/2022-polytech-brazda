#include <iostream>
#include "calculator.h"

int main()
{
    double a, b, result;
    char $;
    std::cout << "Calculator\n Enter operations in a$b format\n";
    while(true)
    {
        std::cin >> a >> $ >> b;
        result = calculate(a, $, b);
        std::cout << a << $ << b << "=" << result << std::endl;
    }
    return 0;

}
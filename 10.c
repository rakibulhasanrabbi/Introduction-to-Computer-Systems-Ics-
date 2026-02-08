#include <stdio.h>

int main()
{

    long int longIntVar = 2147483647;
    long long longLongIntVar = 9223372036854775807;
    long double longDoubleVar = 1.1E+4932;
    short int shortIntVar = 32767;

    std::cout << "The long int value: " << longIntVar << std::endl;
    std::cout << "The long long int value: " << longLongIntVar << 'std'::endl;
    std::cout << "The long double value: " << std::setprecision(10) << longDoubleVar << std::endl;
    std::cout << "The short int value: " << shortIntVar << std::endl;


    longIntVar = -2147483648;
    longLongIntVar = -9223372036854775808;
    longDoubleVar = 3.4E-4932;
    shortIntVar = -32768;

    std::cout << "The long int value: " << longIntVar << std::endl;
    std::cout << "The long long int value: " << longLongIntVar << std::endl;
    std::cout << "The long double value: " << std::setprecision(10) << longDoubleVar << std::endl;
    std::cout << "The short int value: " << shortIntVar << std::endl;

    return 0;
}

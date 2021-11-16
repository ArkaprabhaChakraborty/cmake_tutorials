#include<iostream>

float add(float a, float b);

int main ()
{
    float a=15.0, b=32.0;

    std::cout << "The sum of " << a << " and " << b << " is " << add(a, b) << std::endl;
    return 0;
}


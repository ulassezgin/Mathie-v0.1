#pragma once
#include <iostream>
#include <cstdlib>

enum operations {BASIC_MATH = 1, MATH_FUNC, EQUATIONS, COMPLEX_MATH, PEAK_PARABOL};
typedef enum operations Operations;
//******************************BASIC MATH*************************************
struct basicmath {
    double first_operand;
    char operator_math;
    double second_operand;
    double addition();
    double substraction();
    double multiplication();
    double division();
    double mod();

};

double basicmath::addition()  {
    return first_operand + second_operand;
}

double basicmath::substraction()   {
    return first_operand - second_operand;
}

double basicmath::multiplication()  {
    return first_operand * second_operand;
}

double basicmath::division()    {
    return first_operand / second_operand;
}

double basicmath:: mod()    {
    return static_cast<int>(first_operand) % static_cast<int>(second_operand);
}
//*****************************************************************************



#pragma once
#include <iostream>
#include <cstdlib>

#include "datainfo.h"

using namespace std;
void pre_basicmath() {
    basicmath operation;

    cin >> operation.first_operand >> operation.operator_math >> operation.second_operand;

    switch(operation.operator_math)  {
        case '+':
            cout << operation.addition() << endl;
            break;
        
        case '-':
            cout << operation.substraction() << endl;
            break;

        case '*':
        case '.':
        case 'x':
            cout << operation.multiplication() << endl;
            break;

        case '/':
        case ':':
            cout << operation.division() << endl;
            break;
        default :
        	cout << "NANIXD" << endl;
            break;
    }
}

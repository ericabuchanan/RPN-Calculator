#include "Calculator.h"
#include <iostream>
using namespace std;

void Calculator::add(){
    float num1 = pop();
    float num2 = pop();
    if (num1 != 10000001 && num2 != 10000001){
       push(num1+num2);
    }
    if (num1 == 10000001 && num2 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num2);
    }
    if (num2 == 10000001 && num1 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num1);
    }
    if (num2 == 10000001 && num1 == 10000001){
        cout << "Too few items in stack." << endl;
    }
}
void Calculator::subtract(){
    float num1 = pop();
    float num2 = pop();
    if (num1 != 10000001 && num2 != 10000001){
       push(num1-num2);
    }
    if (num1 == 10000001 && num2 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num2);
    }
    if (num2 == 10000001 && num1 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num1);
    }
    if (num2 == 10000001 && num1 == 10000001){
        cout << "Too few items in stack." << endl;
    }
}

void Calculator::multiply(){
    float num1 = pop();
    float num2 = pop();
    if (num1 != 10000001 && num2 != 10000001){
       push(num1*num2);
    }
    if (num1 == 10000001 && num2 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num2);
    }
    if (num2 == 10000001 && num1 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num1);
    }
    if (num2 == 10000001 && num1 == 10000001){
        cout << "Too few items in stack." << endl;
    }
}

void Calculator::divide(){
    float num1 = pop();
    float num2 = pop();
    if (num1 != 10000001 && num2 != 10000001){
       push(num1/num2);
    }
    if (num1 == 10000001 && num2 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num2);
    }
    if (num2 == 10000001 && num1 != 10000001){
        cout << "Too few items in stack." << endl;
        push(num1);
    }
    if (num2 == 10000001 && num1 == 10000001){
        cout << "Too few items in stack." << endl;
    }
}

// RPN Calculator Activity 04-2021
// helps to learn about how to use stacks (array implementation)

#include <iostream>
#include "Stack.h"
#include "Calculator.h"
using namespace std;

int main(){
    float userNumber;
    char userChoice;
    char userOperator;
    bool endGame = false;
    Calculator a;
    while (endGame == false){
        cout << "Would you like to enter an operator or a number or quit? (o or n or q) "; //could you read them all in as asciii characters(their number version?)
        cin >> userChoice;
        if (userChoice == 'n'){
            cout << "Enter input ";
            cin >> userNumber;
            a.push(userNumber);
            a.display();
        }else if (userChoice == 'o'){
            cout << "Enter operator ";
            cin >> userOperator;
            if (userOperator == '-'){
                a.subtract();
            }else if (userOperator == '+'){
                a.add();
            }else if (userOperator == '/'){
                a.divide();
            }else if (userOperator == '*'){
                a.multiply();
            }
            a.display();
        }else{
            endGame = true;
        }
    }
    return 0;
}

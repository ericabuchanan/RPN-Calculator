#include "Stack.h"
#include <iostream>
using namespace std;

struct Node{
    float data;
    Node *next;
};

Node *head = nullptr;

Stack::Stack(){
    top = -1;
}

void Stack::push(float n){
    Node *newNode = new Node;
    newNode->data = n;
    if (!head){
        newNode->next = nullptr;
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
    /*
    if (!isFull()){
        top++;
        data[top] = n;
    }else{
        cout << "Too many items in stack." << endl;
    }
    */
}

float Stack::pop(){
    if (isEmpty()){
        return 10000001;
    }else{
        float n = head->data;
        head = head->next;
        return n;
        /*
        float n = data[top];
        top--;
        return n;
        */
    }
}

bool Stack::isEmpty(){
    if (!head){
        return true;
    }else{
        return false;
    }
    /*
    if (top == -1){
        return true;
    }else{
        return false;
    }
    */
}

bool Stack::isFull(){
    if (top == 20){
        return true;
    }else{
        return false;
    }
}

void Stack::display(){
    cout << "Stack contents:" << endl;
    Node *i = head;
    while (i != nullptr){
        cout << i->data << endl;
        i = i->next;
    }
    cout << endl;
}

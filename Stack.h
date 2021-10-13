#ifndef MY_STACK
#define MY_STACK

class Stack{

    public:
        Stack();
        void push(float n);
        float pop();
        void display();
        bool isEmpty();
        int top;
    private:
        float data[20];
        bool isFull();
    protected: // can be accessed through inheritance


};

#endif

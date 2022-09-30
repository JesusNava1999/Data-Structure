#ifndef stack_hpp// macro
#define stack_hpp

#include"node.hpp" 

class stack{
    
    int n;
    int s;
    node *list;

    public:

    stack(int);
    ~stack();
    void push(int);
    int pop();
    int top();

    int capacity(){return n;}
    int size(){return s;}

    bool empty(){ return s==0;}
    bool full(){return s==n;}
};
#endif /*stack_hpp*/
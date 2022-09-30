#include "stack.hpp"


stack :: stack(int c): n(c) , s(0) { list = nullptr;}
stack :: ~stack(){}

void stack::push(int x){ 
    
    if(full()) return ;


    if(!list) list = new node(x); 

    else{
        node *aux= new node(x);
        aux -> next(list);
        list = aux;
    }
    s++;
}
int stack::pop(){
    if(empty()) return 0;

    int x = list -> data();
    
    node *aux = list; 
    list -> next(aux);
    delete aux;

    s--;

    return x;
}
int stack::top(){
    if(empty()) return 0;
    return list ->data();
    }

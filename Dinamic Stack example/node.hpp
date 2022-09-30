#ifndef node_hpp
#define node_hpp

class node {
    int _data;
    node *_next;
    public:

    node (int x): _data(x), _next(nullptr){}

    node(int);
    node *next(){return _next;};
    void next(node *p){_next=p;};
    int data(){return _data;};
};

#endif 

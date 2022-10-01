#ifndef STACK_H
#define STACK_H
//===============================================//
#include <iostream>
#include <string>
using namespace std;
//===============================================//
struct stackNode {
    string data;
    stackNode* next;
};
//===============================================//
class Stack
{
private:
    stackNode* top;

public:
    Stack() { top == nullptr; }
    bool isEmpty() { return (top == nullptr); }
    void push(string _data);
    void pop(string &delval);
    void pop();
    string peek();
};
//===============================================//
void Stack::push(string _data)
{
    stackNode* newnode = new stackNode();
    newnode->data = _data;
    newnode->next = nullptr;
    if (isEmpty())
        top = newnode;
    else
    {
        newnode->next = top;
        top = newnode;
    }
}
//===============================================//
void Stack::pop(string &delval)
{
    if (isEmpty())
        return;
    else
    {
        stackNode* delnode = top;
        string popval = top->data;
        top = top->next;
        delete delnode;
    }
}
//===============================================//
void Stack::pop()
{
    if (isEmpty())
        return;
    else
    {
        stackNode* delnode = top;
        top = top->next;
        delete delnode;
    }
}
//===============================================//
string Stack::peek()
{
    return top->data;
}
//===============================================//



#endif
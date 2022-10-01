#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>
#include <iostream>
#include <fstream>
//======================================================//
struct LLnode {
    std::string data;
    LLnode* next;
    LLnode(std::string _data) { data = _data; next = nullptr;}
};
//======================================================//
class LinkedList {
private:
    LLnode* head;
    void appendPrivate(LLnode* newnode, LLnode* cur);
    void printPrivate(LLnode* cur);

public:
    //CONSTRUCTORS
    LinkedList() { head = nullptr; }

    //METHODS
    bool isEmpty() { return (head == nullptr); }
    //INSERTS
    void append(std::string _data);

    //PRINTS
    void print();
    

};
//======================================================//
void LinkedList::append(std::string _data)
{
    LLnode* newnode = new LLnode(_data);
    if (isEmpty())
    {
        head = newnode;
        return;
    }

    LLnode* cur = head;
    appendPrivate(newnode, cur);

}
//======================================================//
void LinkedList::appendPrivate(LLnode* newnode, LLnode* cur)
{
    if (cur->next == nullptr)
    {
        cur->next = newnode;
        return;
    }
    appendPrivate(newnode, cur->next);
}
//======================================================//
void LinkedList::print()
{
    LLnode* cur = head;
    if (isEmpty()) { cout << "LIST EMPTY" << endl; return; }
    printPrivate(cur);
}
//======================================================//
void LinkedList::printPrivate(LLnode* cur)
{
    if (cur == nullptr)
        return;

    cout << cur->data << endl;
    printPrivate(cur->next);
}
//======================================================//
//======================================================//
//======================================================//


#endif
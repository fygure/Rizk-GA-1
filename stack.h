#ifndef STACK_H
#define STACK_H

//===============================================//
template <typename T>
struct node {
  T data;
  node* next;
};
//===============================================//
template <typename T>
class Stack {

private:
  node<T>* top;

public:
  Stack() {top = nullptr;}
  bool isEmpty() {return (top == nullptr);}
  void push(T data);
  void pop(T &delval);
  void pop();
  T peek();

};
//===============================================//
template <typename T>
void Stack<T>::push(T data)
{
  node<T>* newnode = new node<T>;
  newnode->data = data;
  newnode->next = nullptr;
  if (isEmpty())
  {
    top = newnode;
  }
  else
  {
    newnode->next = top;
    top = newnode;
  }
  
}
//===============================================//
template <typename T>
void Stack<T>::pop(T &delval)
{
  if (isEmpty())
    return;
  else
  {
    node<T>* delnode = top;
    T popval = top->data;
    top = top->next;
    delete delnode;
  }
  
}
//===============================================//
template <typename T>
void Stack<T>::pop()
{
  if (isEmpty())
    return;
  else
  {
    node<T>* delnode = top;
    top = top->next;
    delete delnode;
  }
  
}
//===============================================//
template <typename T>
T Stack<T>::peek()
{
  return top->data;
}
//===============================================//



#endif

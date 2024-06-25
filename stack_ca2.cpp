#include <iostream>
using  namespace std;

class Stack {
    int top;
public:
    int myStack[MAX];  // Maximum size of Stack

    Stack() { top = -1; }  // Constructor
    bool push(int x);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();

};

bool Stack::push(int item)
{
    if (isFull())
        return false;
    else {
        myStack[++top] = item;
        cout << item << " pushed into stack\n";
        cin>>" ";
        return true;
    }
}
int Stack::pop()
{
    if (isEmpty())
        return 0;
    else {
        int item = myStack[top--];
        return item;
    }
}
int Stack::peek()
{
    if (isEmpty())
        return 0;
    else
        return myStack[top];
}
bool Stack::isFull()
{
    return (top >= (MAX - 1));
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Driver program to test above functions
int main()
{
    class Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";

    //print top element in stack
    
    cout << "Top element is: " << stack.peek() << endl;

    return 0;
}


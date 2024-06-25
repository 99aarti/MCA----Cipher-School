#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    int top;
public:
    int myStack[MAX];  

    Stack() { top = -1; } 

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

int main()
{
    class Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";

    cout << "Top element is: " << stack.peek() << endl;

    return 0;
}


#include <iostream>
using namespace std;

#define capacity = 50;
int top = capacity;
int stack = [capacity];

void push(int n)
{
    if (top < capacity - 1)
    {
        top++;
        stack[top] = n;
    }
    else
        cout << "No space in stack." << endl;
}

int pop()
{
    if (top >= 0)
    {
        top--;
        return stack[top--];
    }
    else
        cout << "No data in stack." << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;

    return 0;
}
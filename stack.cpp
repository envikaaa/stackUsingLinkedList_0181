#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
private:
    Node *top; //pointer to the top of the stack

public:
    Stack()
    {
        top = NULL; //initialize the stack with a null top pointer
    }

    //push operation: insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->data = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    //pop operation: remove the topmost element from the stack
    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Popped value: " << temp->data << endl;
        top = temp->next; //update the top pointer to  the next node
        delete temp;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty. " << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                
            }
        }
    }
};
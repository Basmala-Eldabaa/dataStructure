#ifndef STACK_H
#define STACK_H
using namespace std;
#include "Node.h"
class Stack
{
    Node * Tos;
    int isEmpty()
    {
        if(Tos==NULL)
        {
            return 1;
        }
        return 0;
    }
    public:
        Stack()
        {
            Tos=NULL;
        }
        ~Stack() {}

        int Push(int Data)
        {
            Node* newNode=new Node(Data);
            newNode->Prev=Tos;
            Tos=newNode;
            return 1;
        }
        int Pop(int &_Data)
        {
            if(isEmpty())
                return 0;
            _Data=Tos->Data;
            Tos=Tos->Prev;
            return 1;
        }
        int Peek(int &_Data)
        {
            if(isEmpty())
                return 0;
            _Data=Tos->Data;
            return 1;
        }
        void Display()
        {
            if(!isEmpty())
            {
                Node* Temp=Tos;
                while(Temp!=NULL)
                {
                    cout<<"the in stack data is "<<Temp->Data<<endl;
                    Temp=Temp->Prev;
                }

            }
        }

    protected:

    private:
};

#endif // STACK_H

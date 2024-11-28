#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;
class LinkedList
{
    private:
        Node <int>* head;
        Node <int>* tail;
    Node <int>* getNodeUsingData(int data){
        Node <int>*current=head;
        while(current != NULL)
        {
            if(*(current->DataPtr)==data)
            {
                return current;
            }
            current=current->Next;
        }
        return NULL;

    }


    public:
        LinkedList()
        {
            head=tail=NULL;
        }
        void add(int data)
        {

            Node <int>* node = new Node <int> (data);

                if(head == NULL)
                {
                    head=tail=node;
                }
                else
                {
                    tail->Next =node;
                    node->Prev=tail;
                    tail=node;
                }
        }
        int display()
        {
            Node <int>* current =head;
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return 0;
            }
            while(current != NULL){
                cout<<*(current->DataPtr)<<"\t";
                current=current->Next;
            }
            cout<<endl;
            return 1;
        }

    void InsertAfter(int data, int afterData)
    {
        Node <int>* node = getNodeUsingData(afterData);
        Node <int>* OG = node->Next;
        if(node == NULL){
            cout<<"No element with this was found to insert the data after it \n";
            return;
        }
        else
        {
            if (node==tail)
            {
                add(data);
            }
            else
            {
                Node <int>* Newnode = new Node <int> (data);
                Newnode->Prev=node;
                Newnode->Next =OG;
                OG->Prev=Newnode;
                node->Next =Newnode;
                return;
            }
        }
    }
    void InsertBefore(int data, int beforeData)
    {
        Node <int>* node = getNodeUsingData(beforeData);
        Node<int>* previous= node->Prev;
        if(node == NULL)
        {
            cout<<"No element with this was found to insert the data after it \n";
            return;
        }
        else
        {
            Node <int>* Newnode = new Node <int> (data);
            if(node == head)
            {
                Newnode->Next=node;
                node->Prev=Newnode;
                head=Newnode;
                return;
            }
            else
            {
                Newnode->Next=node;
                previous->Next=Newnode;
                node->Prev=Newnode;
                Newnode->Prev =previous;
                return;
            }
        }
    }
    int GetCount()
    {
        if(this -> head==this->tail)
        {
            if(this->head==NULL)
                return 0;
            else
                return 1;
        }
        else
        {
            Node<int>* current=head;
            int counter=1;
            while(current!=tail)
            {
                current=current->Next;
                counter++;
            }
            return counter;
        }
    }
    int GetDataByIndex(int index)
    {
        if(index<this->GetCount())
        {
            Node<int>* current=head;
            for(int i=0 ;i<this->GetCount();i++)
            {
                if(i==index)
                {
                    return *(current->DataPtr);
                }
                current=current->Next;
            }
        }
        else
        {
            cout<<"non valid index ..."<<endl;
            return -1;
        }
    }
    void removeNode(int data){
        //Search Linked List
        Node <int>* node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't Remove \n";
            return;
        }
        else
        {
            if(node == head)
            {
                if(node == tail)
                {
                    tail=head=NULL;
                }
                else
                {
                    head=node->Next;
                    head->Prev=NULL;
                }
            }
            else if (node == tail)
            {
                tail=node->Prev;
                tail->Next=NULL;
            }
            else
            {
                Node <int>* A=node->Prev;
                Node <int>* B=node->Next;
                A->Next=B;
                B->Prev=A;
            }
            delete(node);
        }

    }


    Node<int>* search_using_data(int data){
        Node <int>* node = getNodeUsingData(data);
        if(node == NULL)
        {
            return node;
        }
        else
        {
            return node;
        }
    }
    void swapNodes(Node <int>*N1,Node<int>*N2)
    {
        int* Temp = N1->DataPtr;
        N1->DataPtr=N2->DataPtr;
        N2->DataPtr=Temp;
    }

};

#endif

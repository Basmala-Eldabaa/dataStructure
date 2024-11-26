#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;
class LinkedList
{
    private:
        Node * head;
        Node * tail;
    Node * getNodeUsingData(int data){
        Node *current=head;
        while(current != NULL)
        {
            if(current->Data==data)
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

            Node * node = new Node(data);

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
        void display()
        {
            Node * current =head;
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                cout<<current->Data<<"\t";
                current=current->Next;
            }
            cout<<endl;
        }

    void InsertAfter(int data, int afterData)
    {
        Node * node = getNodeUsingData(afterData);
        Node * OG = node->Next;
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
                Node * Newnode = new Node(data);
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
        Node * node = getNodeUsingData(beforeData);
        Node* previous= node->Prev;
        if(node == NULL)
        {
            cout<<"No element with this was found to insert the data after it \n";
            return;
        }
        else
        {
            Node * Newnode = new Node(data);
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
            Node* current=head;
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
            Node* current=head;
            for(int i=0 ;i<this->GetCount();i++)
            {
                if(i==index)
                {
                    return current->Data;
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
        Node * node = getNodeUsingData(data);
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
                Node * A=node->Prev;
                Node * B=node->Next;
                A->Next=B;
                B->Prev=A;
            }
            delete(node);
        }

    }

    int search_using_data(int data){
        Node * node = getNodeUsingData(data);
        if(node == NULL)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }


};

#endif

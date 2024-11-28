#ifndef NODE_H
#define NODE_H
template<class T>

class Node
{
    public:
        Node * Prev,*Next;
        T Data;
        T* DataPtr;
        Node(T data){
            Data=data;
            DataPtr=&Data;
            Prev=Next=NULL;
        }

    protected:

    private:
};

#endif

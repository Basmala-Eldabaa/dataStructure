#ifndef QUEUE_HRear
#define QUEUE_H
using namespace std;

class Queue
{
        int* Q, Front, Rear;
        int QueSize;
        bool IsFull()
        {
            return ((Rear+1)%QueSize == Front);
        }
        bool IsEmpty()
        {
            return (Front==-1);
        }
    public:
        Queue(int Qz=5)
        {
            QueSize = Qz;
            Q = new int [QueSize];
            Front = Rear =-1;
        }
        ~Queue()
        {
            delete[] Q;
        }
        int Enqueue(int Value)
        {
            if(IsFull() == true)
            {
                return 0;
            }
            else if (IsEmpty()==true)
            {
                Front ++;
                Rear=(Rear+1)%QueSize;
                Q[Rear]= Value;
            }
            else
            {
                Rear=(Rear+1)%QueSize;
                Q[Rear]= Value;
            }
            return 1;
        }

        int Dequeue(int &data)
        {
            if(IsEmpty() )
            {
                return 0;
            }
            data = Q[Front];
            if (Front == Rear)
                Front=Rear=-1;

            else
                Front=(Front+1)%QueSize;
            return 1;
        }
        int Getfront(int &data)
        {
            if(IsEmpty() )
            {
                return 0;
            }
            data = Q[Front];
            return 1;
        }
        int GetRear(int &data)
        {
            if(IsEmpty() )
            {
                return 0;
            }
            data = Q[Rear];
            return 1;
        }
        void Display()
        {
            for(int i = Front;i<Rear+1;i++)
            {
                cout<<"The Queue Data "<<Q[i]<<endl;

            }

        }
};

#endif // QUEUE_H

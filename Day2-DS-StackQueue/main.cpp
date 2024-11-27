#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
    Stack stk;//Create items ==> Array 5 elements
    stk.Push(10) ? cout<<"Data Entered \n":cout<<"Data Not Entered \n";
    stk.Push(20) ? cout<<"Data Entered \n":cout<<"Data Not Entered \n";
    stk.Push(30) ? cout<<"Data Entered \n":cout<<"Data Not Entered \n";
    int data;
    stk.Pop(data)?cout<<"POP success data = "<<data<<endl:cout<<"POP Failure \n";
    stk.Pop(data)?cout<<"POP Success data = "<<data<<endl:cout<<"POP Failure \n";
    stk.Pop(data)?cout<<"POP Success data = "<<data<<endl:cout<<"POP Failure \n";
    stk.Peek(data)?cout<<"peek Success data = "<<data<<endl:cout<<"peek Failure \n";

    stk.Push(10) ? cout<<"Data Entered \n":cout<<"Data Not Entered \n";
    stk.Push(20) ? cout<<"Data Entered \n":cout<<"Data Not Entered \n";
    stk.Push(30) ? cout<<"Data Entered \n":cout<<"Data Not Entered \n";
    stk.Peek(data)?cout<<"peek Success data = "<<data<<endl:cout<<"peek Failure \n";
    stk.Peek(data)?cout<<"peek Success data = "<<data<<endl:cout<<"peek Failure \n";
    stk.Display();

    cout<<"---------------------"<<endl;
    Queue A1(5);

	A1.Enqueue(10) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Enqueue(20) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Enqueue(30) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Enqueue(40) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Enqueue(50) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Dequeue(data) ? cout<<"Dequeued Data is "<<data<<endl:cout<<"No Data To Dequeue\n";
	A1.Dequeue(data) ? cout<<"Dequeued Data is "<<data<<endl:cout<<"No Data To Dequeue\n";
	A1.Dequeue(data) ? cout<<"Dequeued Data is "<<data<<endl:cout<<"No Data To Dequeue\n";

	A1.Enqueue(60) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Enqueue(70) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";

	A1.Dequeue(data) ? cout<<"Dequeued Data is "<<data<<endl:cout<<"No Data To Dequeue\n";
	A1.Dequeue(data) ? cout<<"Dequeued Data is "<<data<<endl:cout<<"No Data To Dequeue\n";
	A1.Dequeue(data) ? cout<<"Dequeued Data is "<<data<<endl:cout<<"No Data To Dequeue\n";
	A1.Enqueue(80) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Enqueue(90) ? cout<<"Data Enqueued \n":cout<<"Data Not Enqueued \n";
	A1.Getfront(data) ? cout<<"front Data is "<<data<<endl:cout<<"No Data To see\n";
	A1.GetRear(data) ? cout<<"rear Data is "<<data<<endl:cout<<"No Data To see\n";
	A1.Display();
    return 0;
}

#include <iostream>

using namespace std;
#include "LinkedList.h"


int main()
{

    LinkedList mylist;

    mylist.add(3);
    mylist.add(5);
    mylist.add(10);
    mylist.add(7);
    mylist.add(13);
    mylist.InsertAfter(20,3);
    mylist.InsertBefore(20,3);
    mylist.InsertAfter(50,7);
    mylist.InsertBefore(50,7);
    mylist.InsertAfter(70,13);
    mylist.InsertBefore(70,13);
    mylist.display();
    cout<<mylist.GetCount()<<endl;
    mylist.display();
    cout<<mylist.GetDataByIndex(8)<<endl;

    return 0;
}

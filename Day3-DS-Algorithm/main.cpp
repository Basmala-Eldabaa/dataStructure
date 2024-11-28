#include <iostream>
#include "LinkedList.h"
using namespace std;

void bubbleSort(LinkedList &items)
{
    int iterations=0,sorted=0;
    for(int j=0; sorted==0; j++)
        {
            sorted=1;
            for(int i=0; i<items.GetCount()-1-j; i++)
            {
                if(items.GetDataByIndex(i)>items.GetDataByIndex(i+1))
                {
                    Node <int> * A= items.search_using_data(items.GetDataByIndex(i));
                    Node <int> * B= items.search_using_data(items.GetDataByIndex(i+1));
                    items.swapNodes(A,B);
                    sorted=0;
                }
                iterations++;
            }

        }
}
LinkedList LinearSearch(int*Arr,int Size,int Search)
{
    LinkedList indexlist;
    for(int i=0;i<Size;i++)
    {
        if(Arr[i]==Search)
        {
            indexlist.add(i);
        }
    }
    return indexlist;
}
int BinarySearch(int*Arr,int Size,int Search)
{
    int Start=0,End=Size-1;
    while(Start<=End)
    {
        int mid = (Start+End)/2;
        if(Arr[mid]==Search)
        {
            return mid;
        }
        else if (Arr[mid]>Search)
        {
            End=mid-1;
        }
        else
        {
            Start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int Array [6]={1,2,3,4,8,3};
    int bin_i=BinarySearch(Array,6,3);
    LinkedList lin_i=LinearSearch(Array,6,3);
    cout <<"The indexes found using linear search should be :  "<<endl;
    if(!lin_i.display())
    {
        cout<<"No indexes are found using linear"<<endl;
    }

    if(bin_i!=-1)
    {
        cout<<"The index found using the binary search "<<bin_i<<endl;
    }
    else
    {
        cout<<"The Element is not found binary"<<endl;
    }
    cout << "========================================================" << endl;

    LinkedList mylist;
    mylist.add(3);
    mylist.add(1);
    mylist.add(10);
    mylist.add(7);
    mylist.add(13);
    mylist.display();
    bubbleSort(mylist);
    mylist.display();
    return 0;
}

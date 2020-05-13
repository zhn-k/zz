#include <iostream>
#include<cstring>
using namespace std;
#include "numbers.h"
int main()
{

int k;
cout<<"switch:";
cin>>k;
switch(k){
case 1:
{

    numbers<char> myQueue(5);
    int ct = 0;
    char ch;
    cout<<"queue:";
    while (ct < 5)
    {
       ct++;
       cin >> ch;
       myQueue.enqueue(ch);
    }
    myQueue.print();
    cout<<endl;

    myQueue.getTop();

    cout<<"size:";
    myQueue.SIZE();
    myQueue.isEmpty();
    cout<<endl;
    cout<<"dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl;
    cout<<"enqueue:";
    myQueue.enqueue(ch);
    myQueue.print();
    cout<<endl;

    myQueue.clear();
}
case 2:

{
int n;
   numbers<char> myQueue(n);
   cout<<"n:  ";
    cin>>n;
        int c = 0;
    char h;
    cout<<"queue:";
    while (c < n)
    {
       c++;
       cin >> h;
       myQueue.enqueue(h);
    }
    myQueue.print();
    cout<<endl;

    myQueue.getTop();
    cout<<endl;
    cout<<"SIZE:";
    myQueue.SIZE();

    myQueue.isEmpty();
    cout<<endl;
    cout<<"dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl;
    cout<<"enqueue:";
    myQueue.enqueue(h);
    myQueue.print();
    cout<<endl;

    myQueue.clear();
    }

    case 3:

{
int m;
   numbers<char> myQueue(7);


        int f = 0;
    char d;
    cout<<"queue:";
    while (f < 7)
    {
       f++;
       cin >> d;
       myQueue.enqueue(d);
    }
    myQueue.print();

    myQueue.getTop();
    cout<<endl;
    cout<<"size:";
    myQueue.SIZE();

    myQueue.isEmpty();
    cout<<endl;
    cout<<"dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl;
    cout<<"enqueue:";
    myQueue.enqueue(d);
    myQueue.print();
    cout<<endl;


     numbers<char> MyQueue=myQueue;
     MyQueue.print();

    }

    }

    return 0;
}

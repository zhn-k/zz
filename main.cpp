#include <iostream>
#include<cstring>
using namespace std;
#include "numbers.h"
int main()
{
    setlocale(LC_ALL, "Russian");

int k;
cout<<"введите номер варианта   :";
cin>>k;
switch(k){
case 1:
{

    numbers<char> myQueue(5);
    int ct = 0;
    char ch;
    cout<<"введите очередь:";
    while (ct < 5)
    {
       ct++;
       cin >> ch;
       myQueue.enqueue(ch);
    }
    cout<<"полученная очередь:";
    myQueue.print();
    cout<<endl;

    myQueue.getTop();

    cout<<"размер очереди:";
    myQueue.SIZE();
    myQueue.isEmpty();
    cout<<endl;
    cout<<" очередь после операции dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl;
    cout<<"очередь после операции enqueue:";
    myQueue.enqueue(ch);
    myQueue.print();
    cout<<endl;

    myQueue.clear();
}
case 2:

{
int n;
   numbers<char> myQueue(n);
   cout<<" введите количество элементов:  ";
    cin>>n;
        int c = 0;
    char h;
    cout<<"введите очередь:";
    while (c < n)
    {
       c++;
       cin >> h;
       myQueue.enqueue(h);
    }
    cout<<"очередь:";
    myQueue.print();
    cout<<endl;

    myQueue.getTop();
    cout<<endl;
    cout<<"размер очереди:";
    myQueue.SIZE();

    myQueue.isEmpty();
    cout<<endl;
    cout<<"очередь после операции dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl;
    cout<<"очередь после операции enqueue:";
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
    cout<<"введите очередь"<< endl;
    while (f < 7)
    {
       f++;
       cin >> d;
       myQueue.enqueue(d);
    }
    cout<<"очередь"<< endl;
    myQueue.print();

    myQueue.getTop();
    cout<<endl;
    cout<<"размер:";
    myQueue.SIZE();

    myQueue.isEmpty();
    cout<<endl;
    cout<<"очередь после операции dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl;
    cout<<"очередь после операции enqueue:";
    myQueue.enqueue(d);
    myQueue.print();
    cout<<endl;


     numbers<char> MyQueue=myQueue;
     MyQueue.print();

    }

    }

    return 0;
}

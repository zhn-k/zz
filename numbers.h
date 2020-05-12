#ifndef NUMBERS_H_INCLUDED
#define NUMBERS_H_INCLUDED

#include<iostream>
#include<cstring>

template<typename T>

class numbers {

private:
    T* num;
    int size;
    int start, finish;

public:
    numbers();
    numbers(int y);
    numbers(numbers &y);
    bool enqueue(T const newElem);
    T dequeue();
    T getTop();
    int SIZE();
    ~numbers();
    bool isEmpty();
    int clear();
    void print();
};

template<typename T>
    numbers<T>::numbers( numbers&p)
{   finish=0;
    size=p.size;
    num= new T[size+1];
    for(int i=0; i<size; i++)
        num[i]=p.num[i];
}

template<typename T>
    numbers<T>::numbers():numbers(10)
    {
        finish=0;
    num = new T[size ];
    }

template<typename T>
    numbers<T>::numbers( int y)
{ finish=0;
  size =y;
  num= new T[size];
}

template<typename T>
bool numbers<T>::enqueue( T const newElem)
{
    if( finish ==size )
    {
    T*w=new T [size +1];
    for (int i=0; i<finish; i++)
    {
        w[i]=num[i];
        delete[]num;
        num=w;
    }
    }
    num[finish++]=newElem;
     return 0;

 }

template<typename T>
T numbers<T>::dequeue()
{
    if( finish == 0 )
        return 0;

else
    {T Value = num[0];
    for (int a=0;a<finish; a++)
    {
      num[a]=num[a+1];
    --finish;
    return Value;
    }

}

}
template<typename T>
int numbers<T>::clear()
{   delete [] num;
    finish =0;
    cout<< "clear";
}


template<typename T>
T numbers<T>::getTop()

{
    cout<< *num;
}
template<typename T>
int numbers<T>::SIZE()

{
    cout<< finish;
}
template<typename T>
bool numbers<T>::isEmpty()
{
    if (finish==0)
        cout<<"FALSE";
        else
     cout<< "TRUE";

}

template<typename T>
  numbers<T>::~numbers()
    {
        delete [] num;
    }

    template<typename T>
    void numbers<T>::print( )
{


        cout<<endl;

        for (int i = 0; i <finish; ++i)
           {

           cout << num[i] << " ";}


}

#endif // NUMBERS_H_INCLUDED

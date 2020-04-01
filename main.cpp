#include <iostream>
#include<cstring>
using namespace std;
#include "person.h"
int main() {

person p;

    int i = 0,n=0,x;
   int year;
       char name[100];
       char surname[100];
char buff[1000];
 char *buff1 = buff;
 cout << "input 1(information by default)" << endl << "input 2(information about men)" << endl << "input 3 for operator = " << endl<< "input 4 for operator >" << endl<<"input 5 for operator <" << endl<<"input 6 for operator <=" << endl<<"input 7 for operator >=" << endl<<"input 8 for operator ==" << endl<<"input 9 for operator != " << endl;
  cin >> i;

   if (i == 1) {
        person p1;
        p1.print();
    }

    if (i == 2) {
        int year;
       char name[100];
        char surname[100];

       cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
    cin >> surname;
        cout << "\n";

        person p2(year, name, surname);
        cout << p2.getName(buff1) << " " << p2.getSurname(buff1) << " " << p2.getYear(buff1) << endl;
    }

    if(i == 3) {

       person p3(10, "Bob", "Potter");
        p3.print();
        cout << endl;
        person p4(p3);
        p4.print();}
    if(i==4){


        cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p5(year, name, surname);
        cout << p5.getName(buff1) << " " << p5.getSurname(buff1) << " " << p5.getYear(buff1) << endl;
         cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p6(year, name, surname);
        cout << p6.getName(buff1) << " " << p6.getSurname(buff1) << " " << p6.getYear(buff1) << endl;

{if ( p5> p6)
{
    cout<< " p5 older p6";
}
  else
   {
       cout<< " p6 older p5";
   }}}

if (i==5){

        cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  sername: ";
        cin >> surname;
        cout << "\n";

        person p5(year, name, surname);
        cout << p5.getName(buff1) << " " << p5.getSurname(buff1) << " " << p5.getYear(buff1) << endl;
         cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p6(year, name, surname);
        cout << p6.getName(buff1) << " " << p6.getSurname(buff1) << " " << p6.getYear(buff1) << endl;

{if ( p5< p6)
{
    cout<< " p6 older p5";
}
  else
   {
       cout<< " p5 older p6";
   }}}

if (i==6){

        cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p5(year, name, surname);
        cout << p5.getName(buff1) << " " << p5.getSurname(buff1) << " " << p5.getYear(buff1) << endl;
         cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p6(year, name, surname);
        cout << p6.getName(buff1) << " " << p6.getSurname(buff1) << " " << p6.getYear(buff1) << endl;

{if ( p5<= p6)
{
    cout<< " p6 older or not p5";
}
  else
   {
       cout<< " p5 older ";
   }}}

if (i==7){

        cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p7(year, name, surname);
        cout << p7.getName(buff1) << " " << p7.getSurname(buff1) << " " << p7.getYear(buff1) << endl;
         cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p8(year, name, surname);
        cout << p8.getName(buff1) << " " << p8.getSurname(buff1) << " " << p8.getYear(buff1) << endl;

{if ( p7>= p8)
{
    cout<< " p7 older or not p8";
}
  else
   {
       cout<< " p8 older  p7";
   }}}
if (i==8){

        cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p7(year, name, surname);
        cout << p7.getName(buff1) << " " << p7.getSurname(buff1) << " " << p7.getYear(buff1) << endl;
         cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p8(year, name, surname);
        cout << p8.getName(buff1) << " " << p8.getSurname(buff1) << " " << p8.getYear(buff1) << endl;

{if ( p7== p8)
{
    cout<< " p7 peers p8";
}
  else
   {
       cout<< " p8 not peers  p7";
   }}}
    if (i==9){

        cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p7(year, name, surname);
        cout << p7.getName(buff1) << " " << p7.getSurname(buff1) << " " << p7.getYear(buff1) << endl;
         cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  surname: ";
        cin >> surname;
        cout << "\n";

        person p8(year, name, surname);
        cout << p8.getName(buff1) << " " << p8.getSurname(buff1) << " " << p8.getYear(buff1) << endl;

{if ( p7!= p8)
{
    cout<< " p7 not peers p8";
}
  else
   {
       cout<< " p8  peers  p7";
   }}}


    return 0;

}



#include "person.h"
using namespace std;
person::person():person(0,"none","none"){}

person::person( int year,  char *name,  char *surname)
{
  this->name = 0;
    this->surname = 0;

  setName(name);
  setSurname(surname);
  setYear(year);
}

person& person::operator =(person person0)
{
   setName(name);
  setSurname(surname);
  setYear(year);
  return *this;
}
void person::setYear(int year)
{
    this->year=year;
}
void person::setName(char *name)
{
   delete [] this->name;
   size_t l=strlen(name);
   this-> name = new char [l+1];
   strcpy(this->name, name);
}
void person::setSurname(char *surname)
{
   delete [] this->surname;
   size_t len=strlen(surname);
   this-> surname = new char[len+1];
   strcpy(this->surname, surname);
}
char *person::getSurname(char *s)
{
char *save = s;
char *from = this->surname;

while (*s++ = *from++);
return(save);
}
char *person::getName(char *S)
 {
char *Save = S;
char *From = this->name;

while (*S++ = *From++);
return(Save);
}
int person::getYear()
    {
        return year;
    }

    person::~person()
    {
        delete [] name;
        delete [] surname;
    }
    void person::print()
{
    cout << "year = " << year << "\nname = "<< name << "\nsurname = " << surname << "\n";
}

   bool operator> (const person  &person0, const person  &person01)
{
    return (person0.year > person01.year);
}

bool operator>= (const person  &person0, const person  &person01)
{
    return (person0.year >= person01.year);
}

bool operator< (const person  &person0, const person  &person01)
{
    return (person0.year < person01.year);
}

bool operator<= (const person  &person0, const person  &person01)
{
    return (person0.year <= person01.year) ;
}
bool operator== (const person  &person0, const person  &person01)
{
    return (person0.year == person01.year);
}

bool operator!= (const person  &person0, const person  &person01)
{
    return (person0.year != person01.year) ;
}


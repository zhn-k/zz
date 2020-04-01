#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<iostream>
#include<cstring>
class person {

private:
    int year;
    char *name;
    char *surname;

public:
    person();
    person(int year, char *name, char *surname);
    person&operator =(person person0);

    void setYear(int);
    void setName(char *);
    void setSurname(char *);
    int getYear();
    char *getName(char *);
    char *getSurname(char *);
    ~person();
    void print();

    friend bool operator > (const person  &person0, const person  &person01);
    friend bool operator <= (const person  &person0, const person  &person01);
    friend bool operator < (const person  &person0, const person  &person01);
    friend bool operator >= (const person  &person0, const person  &person01);
    friend bool operator != (const person  &person0, const person  &person01);
    friend bool operator == (const person  &person0, const person  &person01);

};
#endif // PERSON_H_INCLUDED
